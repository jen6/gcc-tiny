
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_html2_DomHTMLAppletElement__
#define __gnu_xml_dom_html2_DomHTMLAppletElement__

#pragma interface

#include <gnu/xml/dom/html2/DomHTMLElement.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
        namespace html2
        {
            class DomHTMLAppletElement;
            class DomHTMLDocument;
        }
      }
    }
  }
}

class gnu::xml::dom::html2::DomHTMLAppletElement : public ::gnu::xml::dom::html2::DomHTMLElement
{

public: // actually protected
  DomHTMLAppletElement(::gnu::xml::dom::html2::DomHTMLDocument *, ::java::lang::String *, ::java::lang::String *);
public:
  virtual ::java::lang::String * getAlign();
  virtual void setAlign(::java::lang::String *);
  virtual ::java::lang::String * getCls();
  virtual void setCls(::java::lang::String *);
  virtual ::java::lang::String * getSrc();
  virtual void setSrc(::java::lang::String *);
  virtual ::java::lang::String * getAlt();
  virtual void setAlt(::java::lang::String *);
  virtual ::java::lang::String * getArchive();
  virtual void setArchive(::java::lang::String *);
  virtual ::java::lang::String * getCode();
  virtual void setCode(::java::lang::String *);
  virtual ::java::lang::String * getCodeBase();
  virtual void setCodeBase(::java::lang::String *);
  virtual ::java::lang::String * getHeight();
  virtual void setHeight(::java::lang::String *);
  virtual jint getHspace();
  virtual void setHspace(jint);
  virtual ::java::lang::String * getName();
  virtual void setName(::java::lang::String *);
  virtual ::java::lang::String * getObject();
  virtual void setObject(::java::lang::String *);
  virtual jint getVspace();
  virtual void setVspace(jint);
  virtual ::java::lang::String * getWidth();
  virtual void setWidth(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_html2_DomHTMLAppletElement__
