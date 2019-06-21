#include <wx/wx.h>

namespace Examples {
  class Application : public wxApp {
    bool OnInit() override {return (new wxFrame(nullptr, wxID_ANY, wxEmptyString))->Show();}
  };
}

int main(int argc, char* argv[]) {
  new Examples::Application();
  return wxEntry(argc, argv);
}
