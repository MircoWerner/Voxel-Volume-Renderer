#ifndef VOXELVOLUMERENDERER_CELLPROPERTIES400_H
#define VOXELVOLUMERENDERER_CELLPROPERTIES400_H

#include "ACellProperties.h"

/**
 * Cell properties for the 400^3 data set. Uses cool warm color map based on the nearest neighbor distance.
 *
 * @author Mirco Werner
 */
class CellProperties400 : public ACellProperties {
public:
    CellProperties400(std::string path);

private:
    void generateProperties() override;

    const float m_COOL_WARM[256 * 3] = {0.22999950386952345, 0.2989989340493756, 0.754000138575591,
                                        0.23451750918602265, 0.30586471825124395, 0.760211287847582,
                                        0.23905139222321087, 0.31271835359723077, 0.7663613706951183,
                                        0.2436017365913441, 0.3195596165920886, 0.7724494083708939,
                                        0.24816908043486074, 0.3263882334026712, 0.7784744332927407,
                                        0.25275391815771386, 0.33320388462766504, 0.7844354891865984,
                                        0.2573567020073366, 0.34000620954660093, 0.7903316312278389,
                                        0.2619778435347082, 0.34679480991553485, 0.7961619261808826,
                                        0.26661771494573344, 0.3535692533668808, 0.8019254525370478,
                                        0.271276650357161, 0.3603290764626063, 0.8076213006505808,
                                        0.27595494696856954, 0.3670737874430388, 0.813248572872804,
                                        0.28065286616048707, 0.37380286870769464, 0.8188063836843368,
                                        0.28537063452740463, 0.3805157790595848, 0.8242938598253321,
                                        0.29010844485334814, 0.3872119557402635, 0.829710140423685,
                                        0.29486645703670583, 0.3938908162793105, 0.8350543771211604,
                                        0.2996447989701334, 0.4005517601788923, 0.8403257341974003,
                                        0.30444356738064665, 0.4071941704514421, 0.8455233886917599,
                                        0.3092628286343541, 0.41381741502624314, 0.8506465305229377,
                                        0.31410261950970153, 0.42042084803879193, 0.8556943626063482,
                                        0.3189629479426216, 0.4270038110151302, 0.8606661009692109,
                                        0.32384379374653405, 0.43356563396190284, 0.8655609748633052,
                                        0.32874510930975565, 0.4401056363716498, 0.8703782268753609,
                                        0.33366682027256384, 0.4466231281517378, 0.8751171130350492,
                                        0.33860882618583127, 0.45311741048440196, 0.8797769029205332,
                                        0.3435710011529169, 0.45958777662452927, 0.8843568797615591,
                                        0.3485531944562718, 0.46603351264108767, 0.8888563405400349,
                                        0.3535552311699886, 0.47245389810747423, 0.8932745960880898,
                                        0.3585769127594044, 0.47884820674548473, 0.8976109711835649,
                                        0.3636180176686533, 0.4852157070271205, 0.9018648046429221,
                                        0.3686783018969878, 0.49155566273800605, 0.9060354494115308,
                                        0.37375749956453747, 0.49786733350580864, 0.9101222726513168,
                                        0.37885532346808715, 0.5041499752967064, 0.9141246558257436,
                                        0.38397146562736917, 0.5104028408826495, 0.918041994782103,
                                        0.38910559782229387, 0.5166251802818846, 0.9218736998310882,
                                        0.39425737212145806, 0.5228162411749818, 0.9256191958236355,
                                        0.39942642140225487, 0.5289752692983762, 0.9292779222250065,
                                        0.4046123598628117, 0.5351015088172548, 0.9328493331860931,
                                        0.4098147835259849, 0.541194202679442, 0.9363328976119261,
                                        0.41503327073558766, 0.5472525929517891, 0.9397280992273693,
                                        0.4202673826449946, 0.5532759211404236, 0.943034436639982,
                                        0.42551666369825586, 0.5592634284961118, 0.9462514234000324,
                                        0.43078064210382544, 0.5652143563058468, 0.9493785880576479,
                                        0.43605883030099185, 0.5711279461717078, 0.9524154742170866,
                                        0.44135072541910086, 0.5770034402779125, 0.9553616405881157,
                                        0.4466558097296202, 0.5828400816469308, 0.9582166610344868,
                                        0.4519735510911263, 0.5886371143854353, 0.960980124619491,
                                        0.457303403387259, 0.5943937839208078, 0.9636516356485881,
                                        0.46264480695769356, 0.6001093372288535, 0.9662308137090968,
                                        0.4679971890221843, 0.6057830230533238, 0.968717293706932,
                                        0.4733599640977317, 0.6114140921177984, 0.9711107259003909,
                                        0.4787325344089037, 0.6170017973304325, 0.9734107759309701,
                                        0.48411429029138214, 0.6225453939820256, 0.9756171248512094,
                                        0.48950461058876166, 0.6280441399378467, 0.9777294691495587,
                                        0.49490286304267245, 0.6334972958235978, 0.9797475207722576,
                                        0.5003084046762621, 0.6389041252058836, 0.9816710071422271,
                                        0.5057205821711058, 0.644263894767512, 0.983499671174965,
                                        0.511138732237593, 0.6495758744779339, 0.9852332712914448,
                                        0.5165621819788595, 0.654839337759102, 0.9868715814280132,
                                        0.5219902492483212, 0.6600535616470082, 0.9884143910432847,
                                        0.5274222430008886, 0.6652178269491371, 0.9898615051220324,
                                        0.5328574636379119, 0.670331418398056, 0.9912127441760742,
                                        0.5382952033459485, 0.6753936248013475, 0.9924679442421503,
                                        0.5437347464294153, 0.6804037391880692, 0.9936269568768029,
                                        0.5491753696372063, 0.685361058951912, 0.9946896491482432,
                                        0.5546163424833603, 0.690264885991224, 0.9956559036252249,
                                        0.5600569275618472, 0.695114526846042, 0.9965256183629146,
                                        0.5654963808555731, 0.6999092928322662, 0.9972987068857656,
                                        0.5709339520396719, 0.7046485001731109, 0.9979750981673984,
                                        0.5763688847791901, 0.7093314701279408, 0.9985547366074979,
                                        0.5818004170212294, 0.7139575291186055, 0.9990375820057199,
                                        0.5872277812816606, 0.7185260088533676, 0.9994236095326229,
                                        0.5926502049264796, 0.7230362464485207, 0.9997128096976274,
                                        0.5980669104479099, 0.7274875845477786, 0.9999051883140077,
                                        0.603477115735333, 0.7318793714395154, 1.0,
                                        0.6088800343411463, 0.7362109611719294, 0.9999995804425049,
                                        0.6142748757416401, 0.7404817136661965, 0.9999016817439826,
                                        0.6196608455929782, 0.7446909948276748, 0.9997071369848932,
                                        0.6250371459823868, 0.7488381766552155, 0.9994160278693497,
                                        0.6304029756746347, 0.7529226373486367, 0.9990284511333963,
                                        0.6357575303538953, 0.7569437614144018, 0.9985445184894549,
                                        0.6411000028610946, 0.7609009397695506, 0.9979643565678705,
                                        0.6464295834268168, 0.7647935698439208, 0.9972881068555687,
                                        0.6517454598998733, 0.7686210556806996, 0.9965159256318358,
                                        0.6570468179716188, 0.7723828080353353, 0.9956479839012286,
                                        0.6623328413960967, 0.7760782444728409, 0.9946844673236305,
                                        0.6676027122061123, 0.7797067894635203, 0.9936255761414589,
                                        0.6728556109253114, 0.7832678744771355, 0.9924715251040422,
                                        0.6780907167763519, 0.7867609380755451, 0.9912225433891731,
                                        0.683307207885253, 0.7901854260038265, 0.9898788745218482,
                                        0.6885042614820046, 0.7935407912799094, 0.988440776290216,
                                        0.6936810540975126, 0.7968264942827246, 0.9869085206587308,
                                        0.6988367617569751, 0.8000420028388932, 0.9852823936785383,
                                        0.7039705601697447, 0.8031867923079613, 0.983562695395095,
                                        0.7090816249157784, 0.8062603456661956, 0.9817497397530396,
                                        0.714169131628733, 0.8092621535889422, 0.9798438544983238,
                                        0.7192322561757896, 0.8121917145315617, 0.9778453810776183,
                                        0.7242701748342745, 0.8150485348089448, 0.9757546745350029,
                                        0.7292820644651583, 0.8178321286736122, 0.9735721034059553,
                                        0.7342671026834836, 0.8205420183923986, 0.971298049608644,
                                        0.7392244680258144, 0.8231777343217284, 0.9689329083325428,
                                        0.7441533401147525, 0.8257388149814784, 0.9664770879243741,
                                        0.7490528998206014, 0.8282248071274302, 0.9639310097713906,
                                        0.7539223294202332, 0.8306352658223072, 0.9612951081820061,
                                        0.7587608127532254, 0.8329697545053927, 0.9585698302637836,
                                        0.7635675353753275, 0.8352278450607313, 0.9557556357987903,
                                        0.7683416847093205, 0.8374091178838983, 0.9528529971163268,
                                        0.7730824501933197, 0.8395131619473374, 0.9498623989630331,
                                        0.7777890234265885, 0.8415395748642601, 0.9467843383703861,
                                        0.7824605983129111, 0.8434879629510917, 0.9436193245195849,
                                        0.7870963712015859, 0.8453579412884608, 0.9403678786038298,
                                        0.7916955410260809, 0.8471491337807205, 0.9370305336880028,
                                        0.7962573094404225, 0.8488611732139871, 0.933607834565744,
                                        0.8007808809533457, 0.8504937013126886, 0.9301003376139276,
                                        0.8052654630602748, 0.8520463687946024, 0.9265086106445327,
                                        0.8097102663731715, 0.8535188354243787, 0.9228332327539112,
                                        0.8141145047483038, 0.854910770065524, 0.9190747941694408,
                                        0.8184773954119764, 0.8562218507308311, 0.9152338960935597,
                                        0.822798159084272, 0.857451764631246, 0.9113111505451725,
                                        0.827076020100851, 0.8586002082231403, 0.9073071801984174,
                                        0.8313102065328385, 0.8596668872539794, 0.9032226182187731,
                                        0.8354999503048602, 0.8606515168063638, 0.8990581080965018,
                                        0.8396444873112505, 0.8615538213404197, 0.8948143034773921,
                                        0.8437430575304858, 0.8623735347345196, 0.8904918679907933,
                                        0.8477949051378751, 0.8631104003243038, 0.8860914750749006,
                                        0.8517992786165454, 0.8637641709399845, 0.8816138077992733,
                                        0.8557554308667662, 0.8643346089419015, 0.8770595586845422,
                                        0.8596626193136427, 0.8648214862543027, 0.8724294295192715,
                                        0.8635201060132168, 0.8652245843973202, 0.8677241311739308,
                                        0.8676431881102519, 0.8645140349150363, 0.8626161485985507,
                                        0.8719973001889246, 0.8626912788780988, 0.8571344116931553,
                                        0.8762551679574422, 0.8607866996599632, 0.8516174449794455,
                                        0.8804169678453379, 0.8588005566711197, 0.8460661683343939,
                                        0.8844828646854237, 0.8567331182372422, 0.8404815005112565,
                                        0.8884530127026752, 0.8545846614985785, 0.834864358985154,
                                        0.892327556446231, 0.8523554723065947, 0.829215659800157,
                                        0.8961066316684723, 0.8500458451177988, 0.8235363174178995,
                                        0.8997903661548088, 0.8476560828846528, 0.8178272445677435,
                                        0.9033788805075311, 0.8451864969434798, 0.812089352098517,
                                        0.9068722888867912, 0.8426374068992736, 0.8063235488318476,
                                        0.910270699711566, 0.8400091405073019, 0.8005307414171138,
                                        0.9135742163232042, 0.8373020335514, 0.7947118341880348,
                                        0.9167829376139871, 0.8345164297188294, 0.7888677290209213,
                                        0.9198969586229171, 0.8316526804715908, 0.7829993251946056,
                                        0.9229163711008167, 0.8287111449140491, 0.7771075192520753,
                                        0.9258412640466325, 0.8256921896567365, 0.7711932048638259,
                                        0.9286717242167226, 0.822596188676188, 0.7652572726929551,
                                        0.9314078366087624, 0.8194235231706464, 0.7593006102620192,
                                        0.9340496849217929, 0.8161745814114749, 0.7533241018216675,
                                        0.9365973519938281, 0.8128497585900935, 0.7473286282210768,
                                        0.9390509202183217, 0.8094494566602553, 0.7413150667802011,
                                        0.9414104719407324, 0.8059740841754534, 0.7352842911638605,
                                        0.9436760898363059, 0.8024240561212462, 0.7292371712576793,
                                        0.9458478572701444, 0.7987997937422701, 0.7231745730458999,
                                        0.9479258586405416, 0.7951017243636899, 0.717097358491085,
                                        0.9499101797065052, 0.7913302812068249, 0.7110063854157246,
                                        0.951800907900325, 0.7874859031986702, 0.7049025073857709,
                                        0.953598132625986, 0.7835690347750057, 0.6987865735961123,
                                        0.9553019455441706, 0.7795801256767763, 0.6926594287580068,
                                        0.9569124408445594, 0.7755196307393911, 0.6865219129884912,
                                        0.9584297155060683, 0.7713880096745724, 0.6803748617017831,
                                        0.9598538695456499, 0.7671857268443542, 0.6742191055026909,
                                        0.9611850062562218, 0.7629132510268043, 0.6680554700820523,
                                        0.9624232324342575, 0.758571055173009, 0.6618847761142137,
                                        0.9635686585975486, 0.7541596161548229, 0.6557078391565709,
                                        0.9646213991936067, 0.7496794145028565, 0.6495254695511868,
                                        0.9655815727991436, 0.7451309341341271, 0.6433384723285004,
                                        0.9664493023110522, 0.7405146620687538, 0.6371476471131512,
                                        0.9672247151292687, 0.7358310881350345, 0.6309537880319284,
                                        0.9679079433318883, 0.7310807046621858, 0.6247576836238656,
                                        0.9684991238428787, 0.7262640061599712, 0.6185601167525033,
                                        0.9689983985927076, 0.7213814889843815, 0.612361864520328,
                                        0.9694059146721955, 0.7164336509884588, 0.6061636981854146,
                                        0.9697218244798756, 0.7114209911572899, 0.5999663830802852,
                                        0.9699462858631324, 0.7063440092261024, 0.5937706785330095,
                                        0.9700794622533694, 0.7012032052803152, 0.5875773377905578,
                                        0.9701215227954475, 0.6959990793362977, 0.5813871079444363,
                                        0.9700726424716136, 0.6907321309014792, 0.5752007298586196,
                                        0.9699330022201408, 0.6854028585123331, 0.5690189380998024,
                                        0.9697027890488664, 0.6800117592486405, 0.5628424608699958,
                                        0.9693821961438281, 0.6745593282222776, 0.556672019941486,
                                        0.9689714229731695, 0.6690460580386323, 0.5505083305941867,
                                        0.968470675386481, 0.663472438228566, 0.5443521015554007,
                                        0.9678801657097379, 0.65783895464866, 0.5382040349420275,
                                        0.9672001128359847, 0.6521460888472544, 0.5320648262052324,
                                        0.9664307423119013, 0.6463943173935754, 0.5259351640776159,
                                        0.9655722864203883, 0.6405841111669635, 0.5198157305229032,
                                        0.964624984259297, 0.6347159346029446, 0.5137072006881956,
                                        0.9635890818164178, 0.6287902448925465, 0.507610242858806,
                                        0.9624648320408441, 0.6228074911309212, 0.5015255184157178,
                                        0.9612524949108144, 0.6167681134109175, 0.4954536817957061,
                                        0.9599523374981328, 0.6106725418568123, 0.4893953804541488,
                                        0.9585646340292623, 0.6045211955929051, 0.4833512548305818,
                                        0.9570896659431806, 0.5983144816411149, 0.4773219383170267,
                                        0.9555277219460815, 0.5920527937410947, 0.47130805722914443,
                                        0.9538790980630029, 0.5857365110856726, 0.4653102307802585,
                                        0.9521440976864516, 0.5793659969636203, 0.4593290710582975,
                                        0.9503230316221086, 0.57294159730086, 0.4533651830057083,
                                        0.948416218131665, 0.5664636390902013, 0.4474191644024001,
                                        0.9464239829728659, 0.5599324286985411, 0.44149160585177294,
                                        0.9443466594368136, 0.5533482500391552, 0.4355830907698924,
                                        0.9421845883825966, 0.546711362595224, 0.42969419537788606,
                                        0.9399381182692833, 0.5400219992790316, 0.4238254886976179,
                                        0.9376076051853501, 0.533280364109342, 0.4179775325507263,
                                        0.9351934128755736, 0.5264866296872404, 0.4121508815610997,
                                        0.9326959127654463, 0.5196409344481697, 0.40634608316087356,
                                        0.9301154839831494, 0.5127433796649743, 0.40056367760003836,
                                        0.9274525133791317, 0.5057940261733677, 0.39480419795975347,
                                        0.9247073955433249, 0.49879289078734274, 0.38906817016946776,
                                        0.9218805328200373, 0.4917399423674949, 0.38335611302795025,
                                        0.9189723353205592, 0.4846350974999652, 0.37766853822834884,
                                        0.9159832209335118, 0.47747821573754495, 0.37200595038739454,
                                        0.9129136153329698, 0.47026909434728564, 0.3663688470788784,
                                        0.90976395198439, 0.46300746250050845, 0.36075771887154084,
                                        0.9065346721483711, 0.4556929748311352, 0.35517304937151345,
                                        0.9032262248822704, 0.44832520427650463, 0.34961531526947287,
                                        0.8998390670397057, 0.44090363410085304, 0.34408498639266283,
                                        0.896373663267962, 0.43342764898501834, 0.3385825257619646,
                                        0.8928304860033279, 0.42589652504602493, 0.33310838965420186,
                                        0.8892100154643842, 0.41830941862630455, 0.32766302766986616,
                                        0.8855127396432578, 0.4106653536635276, 0.32224688280648867,
                                        0.8817391542948727, 0.4029632074170497, 0.31686039153786477,
                                        0.8778897629242048, 0.3952016942845104, 0.3115039838993836,
                                        0.8739650767715597, 0.3873793473900178, 0.30617808357969667,
                                        0.8699656147959004, 0.37949449756134346, 0.30088310801901375,
                                        0.8658919036562271, 0.37154524923423027, 0.2956194685142945,
                                        0.8617444776910301, 0.3635294527231879, 0.29038757033164536,
                                        0.8575238788958367, 0.35544467217440223, 0.2851878128262474,
                                        0.8532306568988527, 0.3472881483602095, 0.2800205895701496,
                                        0.8488653689347272, 0.33905675527607415, 0.27488628848829755,
                                        0.844428579816439, 0.33074694924673165, 0.2697852920031808,
                                        0.8399208619053304, 0.3223547089197083, 0.26471797718851403,
                                        0.835342795079293, 0.3138754640964424, 0.2596847159323806,
                                        0.8306949666991194, 0.30530401078823033, 0.25468587511031116,
                                        0.825977971573034, 0.2966344091359757, 0.24972181676877747,
                                        0.8211924119194148, 0.28785985982733997, 0.2447928983196327,
                                        0.8163388973277163, 0.2789725532777859, 0.23989947274604145,
                                        0.8114180447176049, 0.2699634839588782, 0.2350418888204895,
                                        0.8064304782963232, 0.2608222196264688, 0.230220491335487,
                                        0.8013768295142913, 0.25153661146923556, 0.2254356213476219,
                                        0.7962577370189533, 0.24209242581295431, 0.22068761643565016,
                                        0.7910738466068946, 0.2324728700992567, 0.21597681097335308,
                                        0.785825811174225, 0.22265797397565007, 0.2113035364179236,
                                        0.7805142906652605, 0.21262376808227257, 0.20666812161469034,
                                        0.7751399520194979, 0.20234117434687338, 0.2020708931190197,
                                        0.7697034691169152, 0.19177447487857652, 0.19751217553628297,
                                        0.7642055227215985, 0.18087914808905534, 0.19299229188080813,
                                        0.7586468004237221, 0.16959872367321424, 0.18851156395477772,
                                        0.7530279965798936, 0.15786005774647732, 0.18407031274806854,
                                        0.7473498122518853, 0.1455659466237694, 0.17966885886006054,
                                        0.7416129551437725, 0.13258300379739485, 0.1753075229444704,
                                        0.7358181395374971, 0.11872050682883606, 0.17098662617829208,
                                        0.729966086226886, 0.1036904371731237, 0.16670649075593325,
                                        0.7240575224501452, 0.08702339888581809, 0.1624674404096517,
                                        0.7180931818208612, 0.06786174152286231, 0.15826980095738155,
                                        0.712073804257538, 0.04430319728532283, 0.15411390087901955,
                                        0.7060001359117047, 0.015991824033980695, 0.15000007192220008};
};

#endif