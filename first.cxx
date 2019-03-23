#encoding "utf-8" 
#GRAMMAR_ROOT S   
#include <date.cxx>
Person -> (Word<h-reg1, gram='имя'>) (Word<h-reg1, gram='отч'>) Word<h-reg1, gram='фам'> |
		  Word<h-reg1, gram='имя'> (Word<h-reg1, gram='отч'>) (Word<h-reg1, gram='фам'>);
DateBorn -> Person 'родиться'<gram='прош'> 'в'
     AnyWord<wff=/[1-2]?[0-9]{1,3}г?\.?/> ('год' <gram='ед, дат'>)
     | Person 'родиться'<gram='прош'> 'в' Noun<kwtype="населенный_пункт"> Word<h-reg1> 'в' AnyWord<wff=/[1-2]?[0-9]{1,3}г?\.?/> ('год' <gram='ед, дат'>);
S -> Date; 
S -> DateBorn; 
