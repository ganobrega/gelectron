#include "stable.h"

#include "./src/basicdrawapp.h"
#include "./src/basiclightingapp.h"
#include "./src/basictextureapp.h"
#include "./src/basictextureapp2.h"
#include "./src/basicstencilapp.h"

INT WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE , _In_ LPSTR , _In_ int )
{
    BasicTextureApp2 app;

    bool ok = app.Init(hInstance);

    app.RunLoop();

    return 0;
}