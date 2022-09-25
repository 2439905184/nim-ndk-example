#!/bin/bash
nim c -c --cpu:arm --os:android -d:androidNDK --noMain:on android.nim
