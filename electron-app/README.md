# arduino-dashboard

An Electron application with React


## Project Setup

### Install

```bash
$ npm install
```

### Development

Before launching the app, you need to generate your Arduino Cloud API credentials at https://app.arduino.cc/api-keys

You should be able to generate such credentials and download a PDF file for future reference.

Next steps:

1. launch the app with the command below:

```bash
$ npm run dev
```

2. When the app starts, go to the main menu > Settings and enter your credentials.

3. From now on, you should be able to navigate and retrieve the data from the Arduino Cloud, provided you have configured
your Things properly.


### Build

```bash
# For windows
$ npm run build:win

# For macOS
$ npm run build:mac

# For Linux
$ npm run build:linux
```

## Recommended IDE Setup

- [VSCode](https://code.visualstudio.com/) + [ESLint](https://marketplace.visualstudio.com/items?itemName=dbaeumer.vscode-eslint) + [Prettier](https://marketplace.visualstudio.com/items?itemName=esbenp.prettier-vscode)
