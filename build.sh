#!/bin/bash
nim c -c --cpu:arm --os:android -d:androidNDK --nimcache:nimndk/app/src/main/cpp --noMain:on android.nim
