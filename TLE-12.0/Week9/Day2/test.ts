export type EnvProperties = { [key: string]: string };

// Function to fetch config from the specified path
export const loadRemoteConfig = async (): Promise<EnvProperties> => {
  const response = await fetch('/config/env-properties.json'); // Or your specific path
  if (!response.ok) {
    console.error("Fetch failed:", response.status, response.statusText);
    // Try to get more details if possible
    try {
        const errorBody = await response.text();
        console.error("Error body:", errorBody);
    } catch (e) {
        console.error("Could not read error body");
    }
    throw new Error('Failed to load remote configuration file');
  }
  try {
    const config = await response.json();
    return config as EnvProperties;
  } catch (error) {
    console.error("Failed to parse JSON configuration:", error);
    throw new Error('Configuration file is not valid JSON.');
  }
};

// Function to merge fetched config with process.env
export const mergeEnvVariables = (baseConfig: EnvProperties): EnvProperties => {
  // Start with a copy of the base config
  const finalConfig: EnvProperties = { ...baseConfig };

  // Merge process.env variables (these often come from the build process in front-end)
  Object.keys(process.env).forEach(key => {
    // You might want to filter keys, e.g., only those starting with REACT_APP_ or VITE_
    if (process.env[key] !== undefined) {
      finalConfig[key] = process.env[key] as string;
    }
  });
  return finalConfig;
};