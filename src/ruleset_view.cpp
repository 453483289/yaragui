#include "ruleset_view.h"
#include <QtCore/QFileInfo>

RulesetView::RulesetView(const std::string& file) : m_file(file), m_compiled(false)
{
}

RulesetView::RulesetView(const std::string& file, const std::string& name, bool compiled, const std::string& compilerMessages) : m_file(file), m_name(name), m_compiled(compiled), m_compilerMessages(compilerMessages)
{
}

std::string RulesetView::file() const
{
  return m_file;
}

std::string RulesetView::fileNameOnly() const
{
  QFileInfo info(m_file.c_str());
  return info.fileName().toStdString();
}

bool RulesetView::isCompiled() const
{
  return m_compiled;
}

std::string RulesetView::compilerMessages() const
{
  return m_compilerMessages;
}

bool RulesetView::hasName() const
{
  return !m_name.empty();
}

std::string RulesetView::name() const
{
  return m_name;
}

void RulesetView::setName(const std::string& name)
{
  m_name = name;
}
