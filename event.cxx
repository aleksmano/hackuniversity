#encoding "utf-8" 
#include <date.cxx>
EventNew -> ('в') Date ('год' <gram='ед, дат'>) (Word+) Noun (Word+) Verb<gram='прош'> Word+ 
         | Date Hyphen Noun<wff=/День/> Word+ ;
Event -> EventNew interp (Event.Text);