# Strange error while deploying serverless functions to nuclio so many times
I encountered an strange error like below while deploying serverless function many times.

```sh
Call stack:
stdout:
cat: read error: Is a directory

(abbreviated)

stderr:

    /nuclio/pkg/cmdrunner/shellrunner.go:96
Failed to execute command: /bin/sh -c "/bin/cat /etc/nuclio/store/functions/nuclio/*"
    /nuclio/pkg/platform/local/store.go:408
Failed to run cat command
    /nuclio/pkg/platform/local/store.go:335
Failed to get functions
    /nuclio/pkg/platform/local/store.go:253
Failed to read functions from local store
    /nuclio/pkg/platform/local/store.go:217
```

This was solved by running the following command.

```sh
# Find docker container id of image name alpine:3.11.
docker ps -a
docker exec ${docker_container_id} /bin/sh -c "rm -r /etc/nuclio/store/functions/nuclio/*"
```