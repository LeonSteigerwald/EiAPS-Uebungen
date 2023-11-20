# Selbsthilfe Skript Fitch

# Grundannahme:

- **Jede Zeile ist wahr**
    - Prämissen: sie werden grundsätzlich als wahr angenommen (oberer Teil bei Fitch T)
    - Wird durch logische Regeln hergeleitet (Siehe/ durch Fitch Rules)

- Es gibt keine Regeln um Klammern aufzulösen
- Kommutativität ist kein Teil der Regeln.
    - Steht da, dass nur nach Fitch-Regeln bewiesen werden darf, dürfen bei einem “=” die Seiten nicht vertauscht werden.

Gelb = Frage bzw. unsicher

---

---

# Conjunction - → - “Und”

![Untitled](Selbsthilfe%20Skript%20Fitch%205eaab2c23706418e81914488266bb767/Untitled.png)

### Intro:

• Weil jede Zeile, somit auch jede Prämisse, als wahr angenommen wird, können sie in eine Und-Aussage kombiniert werden.

### Elim:

- Da jedes Element einer Und-Aussage wahr sein muss, kann ein beliebiges Element in eine neue, separate Zeile geschrieben werden und die übrigen Elemente weggelassen werden.
    - Man Eliminiert somit die Verknüpfung samt den restlichen Elementen.

### Wichtig:

- Falls innerhalb der Und-Verknüpfung Klammern vorkommen, können diese nicht einfach aufgelöst werden, sondern der Term der Klammern muss als ein Element gewertet werden.
    - Es gibt keine Fitch-Rule für die Auflösung von Klammern.

---

# Disjunction -  V  - “Oder”

![Untitled](Selbsthilfe%20Skript%20Fitch%205eaab2c23706418e81914488266bb767/Untitled%201.png)

### Intro:

- Ein wahres Element, eine wahre Zeile kann mit beliebig vielen Aussagen verknüpft werden, weil “es reicht ja” ein wahres Element in der Verknüpfung.

### Elim:

- Problem: Wir wissen nicht welches Element und wie viele Elemente wahr sind
- Wir wissen:
    - Es muss mindestens ein Element wahr sein
    - Es dürfen nicht alle Elemente falsch sein
- Unterbeweis: ∀ Elemente muss ein Unterbeweis geführt werden.
    - Jedes Element wird als Annahme eines separaten Unterbeweises gesetzt.
    - Ist die Konklusion (letzte Zeile bei Beweis) jedes Unterbeweises (c1 bis cn) identisch, dann kann sie in die nächst höhere Beweisebene überführt werden
    

---

# Conditional - → - Implikation

![Untitled](Selbsthilfe%20Skript%20Fitch%205eaab2c23706418e81914488266bb767/Untitled%202.png)

### Intro:

- Ohne Subproof keine Implikation
- Wir brauchen die linke Seite als Annahme → Beginn des Subproofs
- diese Annahme hat Folgen (alle Zeilen des Subproofs)
- die Konklusion der Annahme kann als rechte Seite der Implikation eingeführt werden
- die Implikation kann auf der nächst höheren Ebene eingeführt werden.

> “Wenn wir **A** annehmen ( = Beginn des Subproofs/ Unterbeweis), dann folgt daraus **B** (im Unterbeweis. Hätten wir A und B ohne Unterbeweis gegeben, dann könnte man sie zu einer Und-Verknüpfung verbinden. Der Unterschied liegt in der Annahme von **A**.“
> 

### Elim:

> “If you want to prove an implication “If A than B” in mathematics assume A is true and try to derive B” - Luke
> 

- Wir brauchen das vordere Element der Implikation **isoliert** in einer eigenen Zeile
    - Egal ob davor oder nach der Implikation
    - Es muss aber ******vor****** der Elimination der “rechten Seite”
    - Egal ob es ein komplexes Element ist (z. B. Und-Verknüpfung)
    - Sonderfall: Falls das linke Element nicht isolierbar oder vorhanden ist, kann es für einen subproof (mit Konstante) eingeführt werden.
- Ist das Linke Element vorhanden, kann das Rechte Element in eine neue Zeile überführt werden.
- Das Linke Element wird als “wahr” vorausgesetzt und kann daher in eine neue separate Zeile eingefügt werden.
    
     
    

---

---

# Biconditional - ↔ - Äquivalenz

![Untitled](Selbsthilfe%20Skript%20Fitch%205eaab2c23706418e81914488266bb767/Untitled%203.png)

### Intro:

- Zwei Subproofs. Für jede Seite einen (1) und (2)
    - Subproof 1:
        - Wir brauchen die linke Seite als Annahme (1) → Beginn des ersten Subproofs
        - diese Annahme (1) hat Folgen (alle Zeilen des Subproofs)
        - die Konklusion (1) der Annahme kann die rechte Seite der Äquivalenz werden
    - Subproof 2:
        - Wir brauchen die rechte Seite der Annahme (2) ( Konklusion des 1. Subproofs )
        - diese Annahme (2) hat Folgen (alle Zeilen des Subproofs)
        - die Konklusion (2) der Annahme kann die linke Seite der Äquivalenz werden
- Wenn Annahme (1) = Konklusion (2) UND Annahme (2) = Konklusion (1) dann kann die Äquivalenz gebildet werden.

### Elim:

- Da die Äquivalenz nur wahr ist, wenn beide Elemente wahr sind, kann jedes Element in eine neue Zeile herausgezogen werden.

---

---

# Allquantor - ∀ - for all

![Untitled](Selbsthilfe%20Skript%20Fitch%205eaab2c23706418e81914488266bb767/Untitled%204.png)

### Intro:

- Wir brauchen einen Subproof mit einer Variablen
    - Die Variable muss:
        - **neu** sein → darf also bereits nirgends vorkommen
        - **unbestimmt** sein (keine Einzelperson oder Name)
        - muss die gleiche Sorte haben
- Die Konklusion des Subproofs mit der Variable dient als Ausgang für die Einführung.
- Der Allquantor kann auf einer höheren Ebene auf die Konklusion des Subproofs angewandt werden

> “Da die Variable unbestimmt ist, ermöglicht Sie die Einführung des Allquantors. Da sie aber die passende Sorte hat, kann der Allquantor auf die konkrete Aussage angewandt werden.”
> 

### Elim:

- der Allquantor deckt alle Fälle ab.
- somit können wir einen bestimmten Fall / Variable einsetzen (als Konstanten)
    - die Variable kann bereits vorgekommen sein
        - z. B. Namen
    - Variablen müssen neu angenommen werden, falls keine Konstanten vorhanden sind.
        - Variable dient als Start eines Subproofs
    - einzige Bedingung: Sie muss dieselbe Sorte haben, wie das “x”
    
    ![Untitled](Selbsthilfe%20Skript%20Fitch%205eaab2c23706418e81914488266bb767/Untitled%205.png)
    
    To do: Hendrik
    
    ---
    
    ---
    
    # Existenzquantor - E - There is
    
    ![Untitled](Selbsthilfe%20Skript%20Fitch%205eaab2c23706418e81914488266bb767/Untitled%206.png)
    
    ![Untitled](Selbsthilfe%20Skript%20Fitch%205eaab2c23706418e81914488266bb767/Untitled%207.png)
    

### Intro:

- Sobald eine Variable vorkommt, wie etwa ein Name, dann kann sie durch die Formulierung “Es gibt / existiert ein x” ersetzt werden.
    - Es find ein Informationsverlust statt: Platzhalter für eine konkrete Person

> Davor: Hendrik geht montags in die Uni → Danach: Es existiert jemand, der montags in die Uni geht ⇒ Informationsverlust
> 

### Elim:

- Wir brauchen einen Subproof mit einer Variablen als Annahme
    - Die Variable muss:
        - **neu** sein → darf also bereits nirgends vorkommen
        - **unbestimmt** sein (keine Einzelperson oder Name)
        - muss die gleiche Sorte haben
    - Diese Annahme kann auch schon die komplexe Aussage hinter dem Existenzquantor sein
    - Wir fügen für alle “x” des Existenzquantors die neue Variable “c” ein (meistens ist es c)
- Die Konklusion des Subproofs inklusive der eingeführten Variable wird anschließend in einer neuen Zeile, in einer höheren Ebene überführt.

---

---

# Bottom - ⊥ -

![Untitled](Selbsthilfe%20Skript%20Fitch%205eaab2c23706418e81914488266bb767/Untitled%208.png)

### Intro:

- Wir brauchen einen Widerspruch
- Da, “Tertium non datur” (gibt nur wahr oder falsch) bzw. der Satz des Ausgeschlossenem Dritten gilt, können die beiden möglichen Zustände (wahr und falsch) nicht mehr verwendet werden
- An diesem Punkt wird Bottom ⊥ eingefügt.

### Elim:

- Nach Bottom verwerfen wir den vorherigen Beweis und schlagen

---

---

# Negation - ¬

![Untitled](Selbsthilfe%20Skript%20Fitch%205eaab2c23706418e81914488266bb767/Untitled%209.png)

### Intro:

- Grundannahme: Satz vom ausgeschlossenem Dritten.
- Beweis startet mit der Annahme des Gegenteils, führt dieses zum Widerspruch, dann ist der Beweis “ex negativo” abgeschlossen.
    - Annahme einer Aussage (Gegenteil der Zielbehauptung) als Start des Unterbeweises
    - Der Unterbeweis führt zu einem Widerspruch
    - Wir führen ⊥ in der nächsten Zeile des Unterbeweises ein
    - Somit ist die angenommene Aussage (Prämisse) samt ihres Unterbeweises falsch
    - Die Negation der angenommene Aussage (Prämisse) kann in einer neuen Zeile der nächst höheren Ebene angenommen werden (Einführung der Negation der Prämisse)

### Elim:

- Zwei Negationen (¬ ¬ ) ergeben +

```markdown
¬¬ -> 1
"-" und "-" -> + 
Minus und Minus ergibt Plus
```

---

---

# Identity = Introduction