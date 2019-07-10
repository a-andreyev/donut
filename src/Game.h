#pragma once

#include <memory>
#include <SkinModel.h>

namespace Donut {

class Window;

class Game {
public:
    Game(int argc, char** argv);
    ~Game();

    Window& GetWindow() const {
        return *_window;
    }

    void Run();
private:
    void debugDrawP3D(const P3D::P3DFile&);

    std::unique_ptr<Window> _window;
    std::unique_ptr<SkinModel> _skinModel;

	glm::vec3 _lookAt;
    glm::vec3 _camPos;
};

} // namespace Donut
