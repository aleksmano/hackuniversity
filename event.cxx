#encoding "utf-8" 
#include <date.cxx>
EventNew -> ('в') Date ('год' <gram='ед, дат'>) Verb<gram='прош'> Word+ 
         | ('в') Date ('год' <gram='ед, дат'>) (Adj) Noun (Word+) Verb<gram='прош'> Word+ 
         | Date Hyphen Noun<wff=/День/> Word+ ;
Event -> EventNew interp (Event.Text);