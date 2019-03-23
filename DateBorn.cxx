#encoding "utf-8"
Person -> (Word<h-reg1, gram='имя'>) (Word<h-reg1, gram='отч'>) Word<h-reg1, gram='фам'> |
		  Word<h-reg1, gram='имя'> (Word<h-reg1, gram='отч'>) (Word<h-reg1, gram='фам'>);
DateBorn -> Person 'родиться'<gram='прош'> 'в'
     AnyWord<wff=/[1-2]?[0-9]{1,3}г?\.?/> ('год' <gram='ед, дат'>)
     | Person 'родиться'<gram='прош'> 'в' Noun<kwtype="населенный_пункт"> Word<h-reg1> 'в' AnyWord<wff=/[1-2]?[0-9]{1,3}г?\.?/> ('год' <gram='ед, дат'>)
     | Person 'родиться'<gram='прош'> Date ('год' <gram='ед, род'>) | 'родиться'<gram='прош'> Person<rt> ('в') (Date) ('год' <gram='ед, род'>) ; 