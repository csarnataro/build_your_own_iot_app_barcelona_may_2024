import ReactDOM from 'react-dom/client'
import { BrowserRouter as Router } from 'react-router-dom'
import './assets/index.css'
import App from './App'
import ErrorBoundary from './components/ErrorBoundary'

ReactDOM.createRoot(document.getElementById('root')).render(
  <Router>
    <ErrorBoundary>
      <App />
    </ErrorBoundary>
  </Router>
)
