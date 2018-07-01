set pboManager="C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe"

for %%s in (
    ttt_berets
    ttt_main
    ttt_signs
    ttt_snipernvg
    ttt_units_base
    ttt_units_bw
    ttt_units_us
    ttt_vehicles_bw
    ttt_vehicles_pmc
    ttt_vehicles_us
    ) do (
    %pboManager% "C:\ttt_a3\%%s"
)

pause