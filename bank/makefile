CXX=gcc
CXXFLAGS=-Wall -Wextra -std=c++11
SFML_LIBS=-lsfml-graphics -lsfml-window -lsfml-system

SRCDIR=src
BUILDDIR=build
TARGET=bank

SRCEXT=c
SOURCES=$(wildcard $(SRCDIR)/*.$(SRCEXT))
OBJECTS=$(patsubst $(SRCDIR)/%, $(BUILDDIR)/%, $(SOURCES:.$(SRCEXT)=.o))

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(SFML_LIBS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) -r $(BUILDDIR) $(TARGET)

.PHONY: clean
