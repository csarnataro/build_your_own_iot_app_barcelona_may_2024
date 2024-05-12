import { Component } from 'react'

class ErrorBoundary extends Component {
  constructor(props) {
    super(props)
    this.state = {
      error: null,
      hasError: false,
      showError: false
    }
  }

  componentDidCatch(e) {
    this.setState({ hasError: true, error: e.message })
  }

  render() {
    return this.state.hasError ? (
      <div>
        <h1>Uh, there was an error 😞</h1>
        <p>
          Engineering team already notified of the catch, but you can go ahead and chat with us.
        </p>
        {!this.state.showError && (
          <button onClick={() => this.setState({ showError: true })}>Show error →</button>
        )}
        {this.state.showError && (
          <pre>
            <code>{this.state.error}</code>
          </pre>
        )}
      </div>
    ) : (
      this.props.children
    )
  }
}

export default ErrorBoundary
