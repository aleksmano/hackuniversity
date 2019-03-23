#encoding "utf-8"
Day -> AnyWord<wff=/([1-2]?[0-9])|(3[0-1])/>; // число от 1 до 31
Month -> Noun<kwtype="месяц"> | AnyWord<wff=/([1-2]?[0-9])|(1[0-2])/>;  // используем слова из статьи "месяц"
Year -> AnyWord<wff=/[1-2]?[0-9]{1,3}г?\.?/> ; // число от 0 до 2999 с возможным "г" или "г." в конце
Date -> Day Month (Year) | (Day) (Month) Year 'год' | (Day) Month Year;