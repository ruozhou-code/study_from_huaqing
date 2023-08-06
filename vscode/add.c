//远程
{
    "editor.inlineSuggest.showToolbar": "always",
    "editor.quickSuggestions": {
        "comments": "on",
        "strings": "on"
    },
    "editor.quickSuggestionsDelay": 5,
    "C_Cpp.inlayHints.parameterNames.enabled": true,
    "C_Cpp.errorSquiggles": "disabled",
    "files.autoSave": "onFocusChange",
    "editor.formatOnType": true,
    "editor.formatOnSave": true,
    "editor.formatOnPaste": true
}

//setting
{
    "C_Cpp.default.intelliSenseMode": "linux-gcc-arm",
    "C_Cpp.intelliSenseEngine": "Tag Parser",
    "C_Cpp.intelliSenseEngineFallback": "Disabled",
    "files.exclude": {
        "**/.hprof": true,
        "**/.iml": true,
        "**/.pyc": true,
        "**/.pyo": true,
        "**/.rbc": true,
        "**/.yarb": true,
        "**/*~": true,
        "**/.DS_Store": true,
        "**/.git": true,
        "**/.hg": true,
        "**/.svn": true,
        "**/CVS": true,
        "**/__pycache__": true,
        "**/_svn": true,
        "**/target": true,
        "**/vssver.scc": true,
        "**/vssver2.scc": true,
        "**/*.o": true,
        "**/*.cmd": true,
        "**/.*": true,
        "**/*.o.d": true,
        "**/.idea": true
    },
    "cSpell.enabled": false
}

//linux配置
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**",
                "/home/farsight/farsight/linux-5.4.31/**"
            ],
            "defines": [],
            "compilerPath": "/opt/stm32_sdk/sysroots/x86_64-ostl_sdk-linux/usr/bin/arm-ostl-linux-gnueabi/arm-ostl-linux-gnueabi-gcc",
            "cStandard": "c11",
            "cppStandard": "gnu++14"
        }
    ],
    "version": 4
}