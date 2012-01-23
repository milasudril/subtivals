#ifndef STYLEEDITOR_H
#define STYLEEDITOR_H

#include <QWidget>

namespace Ui {
    class StyleEditor;
}

class Script;
class Style;

class StyleEditor : public QWidget
{
    Q_OBJECT

public:
    explicit StyleEditor(Script* script = 0, QWidget *parent = 0);
    ~StyleEditor();
    void setScript(Script*);

public slots:
    void save() { /* TODO: issue #67 */ }
    void apply();
    void reset();
    void styleSelected(int);
    void chooseColour();

protected:
    void initComponents();
    void fillButtonColour();

private:
    Script* m_script;
    QList<Style*> m_styles;
    QColor m_colour;
    Ui::StyleEditor *ui;
};

#endif // STYLEEDITOR_H