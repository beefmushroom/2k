#!/bin/sh
ifconfig | grep '\tether' | cut -c 8- | rev | cut -c 2- | rev
