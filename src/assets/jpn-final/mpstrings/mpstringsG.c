#include <ultra64.h>
#include "constants.h"
#include "data.h"
#include "types.h"

static struct mpstrings strings[] = {
	// MPCONFIG_TEMPLE
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_PISTOLS
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_FARSIGHT
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_DRUGGUN
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_SLAYER
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_CLOAKING
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_SLOWMO
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_NOSHIELD
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_BRIEFCASE
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_SKEDARKING
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_FLAGS
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_SIMULANTS
	{
		"",
		{
			"MeatSim:1\n",
			"MeatSim:2\n",
			"NormalSim:1\n",
			"NormalSim:2\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_AUTOMATICS
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_ROCKETS
	{
		"",
		{
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
			"\n",
		},
	},
	// MPCONFIG_CHALLENGE01
	{
		"Sie treten gegen Basis-Simulanten mit Standard-Ausr�stung an.",
		{
			"SchockSim:1\n",
			"WachSim:1\n",
			"SchockSim:2\n",
			"WachSim:2\n",
			"SchockSim:3\n",
			"WachSim:3\n",
			"SchockSim:4\n",
			"WachSim:4\n",
		},
	},
	// MPCONFIG_CHALLENGE02
	{
		"Sie treten gegen Basis-Simulanten mit Raketenwerfern an.",
		{
			"SchockSim:1\n",
			"WachSim:1\n",
			"SchockSim:2\n",
			"WachSim:2\n",
			"SchockSim:3\n",
			"WachSim:3\n",
			"SchockSim:4\n",
			"WachSim:4\n",
		},
	},
	// MPCONFIG_CHALLENGE03
	{
		"Basis-Simulanten mit Sturmgewehren und Zeitz�nder-Minen sind mit dabei!",
		{
			"TechSim:1\n",
			"TechSim:2\n",
			"TechSim:3\n",
			"TechSim:4\n",
			"TechSim:5\n",
			"TechSim:6\n",
			"TechSim:7\n",
			"TechSim:8\n",
		},
	},
	// MPCONFIG_CHALLENGE04
	{
		"Verteidigen Sie den H�gel gegen ein Team von Standard-Simulanten.",
		{
			"CISim:1\n",
			"CISim:2\n",
			"CISim:3\n",
			"CISim:4\n",
			"CISim:5\n",
			"CISim:6\n",
			"CISim:7\n",
			"CISim:8\n",
		},
	},
	// MPCONFIG_CHALLENGE05
	{
		"K�mpfen Sie gegen Standard-Simulanten unter Verwendung einer Fernsicht-Waffe.",
		{
			"CassSim\n",
			"WachSim:1\n",
			"WachSim:2\n",
			"WachSim:3\n",
			"WachSim:4\n",
			"WachSim:5\n",
			"WachSim:6\n",
			"WachSim:7\n",
		},
	},
	// MPCONFIG_CHALLENGE06
	{
		"Verteidigen Sie den Aktenkoffer so lange wie m�glich gegen Basis-Simulanten.",
		{
			"WorkSim:1\n",
			"WorkSim:2\n",
			"WorkSim:3\n",
			"WorkSim:4\n",
			"WorkSim:5\n",
			"WorkSim:6\n",
			"WorkSim:7\n",
			"WorkSim:8\n",
		},
	},
	// MPCONFIG_CHALLENGE07
	{
		"Bringen Sie den H�gel unter Ihre Kontrolle. Ein Treffer bedeutet das Aus.",
		{
			"JoSim:1\n",
			"JoSim:2\n",
			"JoSim:3\n",
			"JoSim:4\n",
			"JoSim:5\n",
			"JoSim:6\n",
			"JoSim:7\n",
			"JoSim:8\n",
		},
	},
	// MPCONFIG_CHALLENGE08
	{
		"Schnappen Sie den Koffer der Gegner, w�hrend Sie Ihren eigenen verteidigen.",
		{
			"SnipeSim:1\n",
			"SnipeSim:2\n",
			"SnipeSim:3\n",
			"SnipeSim:4\n",
			"SnipeSim:5\n",
			"SnipeSim:6\n",
			"SnipeSim:7\n",
			"SnipeSim:8\n",
		},
	},
	// MPCONFIG_CHALLENGE09
	{
		"In diesem Szenario d�rfen Sie nicht getroffen werden. Seien Sie vorsichtig!",
		{
			"TrentSim\n",
			"NSASim:1\n",
			"NSASim:2\n",
			"NSASim:3\n",
			"NSASim:4\n",
			"NSASim:5\n",
			"NSASim:6\n",
			"NSASim:7\n",
		},
	},
	// MPCONFIG_CHALLENGE10
	{
		"K�mpfen Sie gegen ein Team von Experten-Simulanten. Hacken Sie in den PC.",
		{
			"WachSim:1\n",
			"SWATSim:1\n",
			"WachSim:2\n",
			"SWATSim:2\n",
			"WachSim:3\n",
			"SWATSim:3\n",
			"WachSim:4\n",
			"SWATSim:4\n",
		},
	},
	// MPCONFIG_CHALLENGE11
	{
		"Verteidigen sie den H�gel. Als Waffen stehen Schrotflinten und Bet�ubungs-Gewehre zur Verf�gung.",
		{
			"BlondSim:1\n",
			"BlondSim:2\n",
			"BlondSim:3\n",
			"BlondSim:4\n",
			"BlondSim:5\n",
			"BlondSim:6\n",
			"BlondSim:7\n",
			"BlondSim:8\n",
		},
	},
	// MPCONFIG_CHALLENGE12
	{
		"Ein Zeitlupen-Kampf in der Skedar-Arena.",
		{
			"JoSim:1\n",
			"JoSim:2\n",
			"JoSim:3\n",
			"JoSim:4\n",
			"JoSim:5\n",
			"JoSim:6\n",
			"JoSim:7\n",
			"JoSim:8\n",
		},
	},
	// MPCONFIG_CHALLENGE13
	{
		"Kein Treffer! G5! Bet�ubungsgewehre!",
		{
			"CIASim:1\n",
			"FBISim:1\n",
			"CIASim:2\n",
			"FBISim:2\n",
			"CIASim:3\n",
			"FBISim:3\n",
			"CIASim:4\n",
			"FBISim:4\n",
		},
	},
	// MPCONFIG_CHALLENGE14
	{
		"Schnappen Sie - in Tarnung - den Koffer in der Area 52.",
		{
			"WachSim:1\n",
			"TruppSim:1\n",
			"WachSim:2\n",
			"LuftSim:1\n",
			"WachSim:3\n",
			"TruppSim:2\n",
			"WachSim:4\n",
			"LuftSim:2\n",
		},
	},
	// MPCONFIG_CHALLENGE15
	{
		"Schnappen Sie die Aktentasche im Netz.",
		{
			"LabSim:1\n",
			"LabSim:2\n",
			"LabSim:3\n",
			"LabSim:4\n",
			"LabSim:5\n",
			"LabSim:6\n",
			"LabSim:7\n",
			"LabSim:8\n",
		},
	},
	// MPCONFIG_CHALLENGE16
	{
		"Standard-Kampf mit Minen, aber ohne Radar.",
		{
			"BioSim:1\n",
			"BioSim:2\n",
			"BioSim:3\n",
			"BioSim:4\n",
			"BioSim:5\n",
			"BioSim:6\n",
			"BioSim:7\n",
			"BioSim:8\n",
		},
	},
	// MPCONFIG_CHALLENGE17
	{
		"Der Herr des H�gels. Unter den Waffen finden Sie auch Fly-by-wire-Raketen.",
		{
			"DanSim\n",
			"CISim:1\n",
			"CISim:2\n",
			"CISim:3\n",
			"CISim:4\n",
			"CISim:5\n",
			"CISim:6\n",
			"CISim:7\n",
		},
	},
	// MPCONFIG_CHALLENGE18
	{
		"Sind Sie noch immer der Herr des H�gels? Experten-Simulanten wollen es wissen!",
		{
			"ElvisSim\n",
			"MaianSim:1\n",
			"MaianSim:2\n",
			"MaianSim:3\n",
			"MaianSim:4\n",
			"MaianSim:5\n",
			"MaianSim:6\n",
			"MaianSim:7\n",
		},
	},
	// MPCONFIG_CHALLENGE19
	{
		"Ein Zeitraffer-Kampf. Weitsicht-Waffen und Raketenwerfer sind vorhanden.",
		{
			"CassSim\n",
			"TrentSim\n",
			"SnipeSim:1\n",
			"SnipeSim:2\n",
			"SnipeSim:3\n",
			"SnipeSim:4\n",
			"SnipeSim:5\n",
			"SnipeSim:6\n",
		},
	},
	// MPCONFIG_CHALLENGE20
	{
		"Lassen Sie sich nicht treffen und sch�tzen Sie schw�chere Mitstreiter. Pistolen und Schilde sind vorhanden.",
		{
			"PilotSim:1\n",
			"PilotSim:2\n",
			"LuftSim:6\n",
			"LuftSim:5\n",
			"LuftSim:4\n",
			"LuftSim:3\n",
			"LuftSim:2\n",
			"LuftSim:1\n",
		},
	},
	// MPCONFIG_CHALLENGE21
	{
		"Hacken Sie sich in den PC! Die Tarnkappen-Technik ist verf�gbar.",
		{
			"JoSim\n",
			"SchneeSim:1\n",
			"SchneeSim:2\n",
			"SchneeSim:3\n",
			"SchneeSim:4\n",
			"SchneeSim:5\n",
			"SchneeSim:6\n",
			"SchneeSim:7\n",
		},
	},
	// MPCONFIG_CHALLENGE22
	{
		"Armbrust und Sniper-Gewehr sind die richtigen Waffen, um die Aktentasche zu verteidigen. ",
		{
			"PresSim\n",
			"WachSim:1\n",
			"WachSim:2\n",
			"WachSim:3\n",
			"WachSim:4\n",
			"WachSim:5\n",
			"WachSim:6\n",
			"WachSim:7\n",
		},
	},
	// MPCONFIG_CHALLENGE23
	{
		"Ein Kampf in Zeitlupe. Die Waffen beinhalten die RCP120.",
		{
			"KlonSim\n",
			"StripeSim:1\n",
			"StripeSim:2\n",
			"StripeSim:3\n",
			"StripeSim:4\n",
			"StripeSim:5\n",
			"StripeSim:6\n",
			"StripeSim:7\n",
		},
	},
	// MPCONFIG_CHALLENGE24
	{
		"Schnappen Sie den Koffer vor den Experten-Simulanten. Waffen: Gold DY357 Magnum, Bet�ubungs-Gewehr. ",
		{
			"WachSim:1\n",
			"TruppSim:1\n",
			"LuftSim:1\n",
			"WachSim:2\n",
			"TruppSim:2\n",
			"LuftSim:2\n",
			"WachSim:3\n",
			"WachSim:4\n",
		},
	},
	// MPCONFIG_CHALLENGE25
	{
		"Ein Standard-Kampf mit N-Bomben und Tarnkappen. Das Simulanten-Team besteht aus Experten.",
		{
			"SchockSim:1\n",
			"SchockSim:2\n",
			"SchockSim:3\n",
			"SchockSim:4\n",
			"SchockSim:5\n",
			"SchockSim:6\n",
			"SchockSim:7\n",
			"SchockSim:8\n",
		},
	},
	// MPCONFIG_CHALLENGE26
	{
		"Ein Standard Herr-des-H�gels-Spiel ohne Schilde.",
		{
			"TechSim:1\n",
			"TechSim:2\n",
			"CISim:1\n",
			"CISim:2\n",
			"CISim:3\n",
			"CISim:4\n",
			"CISim:5\n",
			"CISim:6\n",
		},
	},
	// MPCONFIG_CHALLENGE27
	{
		"Hacken Sie sich durch!! Pro: Raketenwerfer, Contra: Experten-Simulanten",
		{
			"CIASim:1\n",
			"FBISim:1\n",
			"CIASim:2\n",
			"FBISim:2\n",
			"CIASim:3\n",
			"FBISim:3\n",
			"CIASim:4\n",
			"FBISim:4\n",
		},
	},
	// MPCONFIG_CHALLENGE28
	{
		"Schnappen Sie den Koffer! Ohne Schilde, aber mit Experten-Simulanten.",
		{
			"WachSim:1\n",
			"WachSim:2\n",
			"WachSim:3\n",
			"WachSim:4\n",
			"WachSim:5\n",
			"WachSim:6\n",
			"WachSim:7\n",
			"WachSim:8\n",
		},
	},
	// MPCONFIG_CHALLENGE29
	{
		"Ein Standard-Kampf ohne Schilde, aber mit der DY357 und dem Dragon.",
		{
			"WorkSim:1\n",
			"WorkSim:2\n",
			"WachSim:1\n",
			"WachSim:2\n",
			"WachSim:3\n",
			"WachSim:4\n",
			"WachSim:5\n",
			"WachSim:6\n",
		},
	},
	// MPCONFIG_CHALLENGE30
	{
		"Der H�gel kann nur mit Pistolen verteidigt werden. Die Gegner sind Elite-Simulanten.",
		{
			"BlondSim:1\n",
			"CassSim\n",
			"TrentSim\n",
			"BlondSim:2\n",
			"BlondSim:3\n",
			"JoSim:3\n",
			"JoSim:2\n",
			"JoSim:1\n",
		},
	},
};
