// src/main.tsx

import React from 'react';
import ReactDOM from 'react-dom/client';
// Assuming this provider accepts the config, often via a prop named 'config' or similar
import { ConfigContextProvider } from '@wf/react-library';
import App from './App';

// 1. Import your config loading utilities (adjust path if necessary)
import { loadRemoteConfig, mergeEnvVariables, EnvProperties } from './configUtils';

// 2. Get the root element (better to do this check early)
const rootElement = document.getElementById('root');
if (!rootElement) {
  throw new Error("Fatal Error: Root element 'root' not found in HTML.");
}

// 3. Create the React root instance
const root = ReactDOM.createRoot(rootElement);

// 4. Define an async function to handle initialization and rendering
const initializeAndRenderApp = async () => {
  try {
    console.log("Initializing application...");

    // 5. Load base configuration asynchronously
    console.log("Fetching remote configuration...");
    const remoteConfig: EnvProperties = await loadRemoteConfig();
    console.log("Remote configuration loaded.", remoteConfig); // Log loaded config

    // 6. Merge with environment variables (if any relevant ones are set)
    console.log("Merging environment variables...");
    const finalConfig: EnvProperties = mergeEnvVariables(remoteConfig);
    console.log("Final configuration ready.", finalConfig); // Log final config

    // 7. Render the application, passing the loaded config to the provider
    console.log("Rendering application...");
    root.render(
      <React.StrictMode>
        {/* Pass the finalConfig to your context provider */}
        {/* Check the library docs for the exact prop name - assuming 'config' */}
        <ConfigContextProvider config={finalConfig}>
          <App />
        </ConfigContextProvider>
      </React.StrictMode>
    );
     console.log("Application rendered.");

  } catch (error) {
    console.error("Application Initialization Failed:", error);
    // Render a user-friendly error message if initialization fails
    root.render(
      <div style={{ padding: '20px', color: 'red', fontFamily: 'sans-serif' }}>
        <h1>Error Loading Application</h1>
        <p>Could not load necessary configuration settings.</p>
        {/* Display error message for debugging */}
        <pre>{error instanceof Error ? error.message : String(error)}</pre>
      </div>
    );
  }
};

// 8. Call the async function to start the process
initializeAndRenderApp();