#include "../include/ncp/Simulation.h"

#if defined(__MSC_VER) && (__MSC_VER >= 1900) && \
    !defined(IMGUI_DIABLE_WIN32_FUNCTIONS)
#pragma comment(lib, "legact_stdio_definitions")
#endif

// Compile the project using Emscripten
#ifdef __EMSCRIPTEN__
#include "../libs/emscripten/emscripten_mainloop_stub.h"
#endif

static void glfw_error_callback(int error, const char* description) {
  fprintf(stderr, "GLFW Error %d: %s\n", error, description);
}

int main() {
  ncp::Sim gravitySim("Universe Studio", "guh");
  gravitySim.run();
}
