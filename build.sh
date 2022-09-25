#!/bin/bash
nim c -c --cpu:arm --os:android -d:androidNDK --nimcache:prebuild --noMain:on android.nim
