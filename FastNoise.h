#define FN_CELLULAR_INDEX_MAX 3
//#define FN_USE_DOUBLES

#ifdef FN_USE_DOUBLES
typedef double FN_DECIMAL;
#else
typedef float FN_DECIMAL;
#endif

enum NoiseType { Value, ValueFractal, Perlin, PerlinFractal, Simplex, SimplexFractal, Cellular, WhiteNoise, Cubic, CubicFractal };
enum Interp { Linear, Hermite, Quintic };
enum FractalType { FBM, Billow, RigidMulti };
enum CellularDistanceFunction { Euclidean, Manhattan, Natural };
enum CellularReturnType { CellValue, NoiseLookup, Distance, Distance2, Distance2Add, Distance2Sub, Distance2Mul, Distance2Div };

FN_DECIMAL SinglePerlin(unsigned char offset, FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,enum Interp m_interp);
FN_DECIMAL SingleValue2D(unsigned char offset, FN_DECIMAL x, FN_DECIMAL y,enum Interp m_interp);
FN_DECIMAL SinglePerlinFractalFBM(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,enum Interp m_interp,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain,FN_DECIMAL m_fractalBounding);
FN_DECIMAL SinglePerlinFractalBillow(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,enum Interp m_interp,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain,FN_DECIMAL m_fractalBounding);
FN_DECIMAL SinglePerlinFractalRigidMulti(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,enum Interp m_interp,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain);
FN_DECIMAL GetWhiteNoise4D(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z, FN_DECIMAL w,int m_seed);
FN_DECIMAL GetWhiteNoise3D(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,int m_seed);
FN_DECIMAL GetWhiteNoise2D(FN_DECIMAL x, FN_DECIMAL y,int m_seed);
FN_DECIMAL GetWhiteNoiseInt4D(int x, int y, int z, int w,int m_seed);
FN_DECIMAL GetWhiteNoiseInt3D(int x, int y, int z,int m_seed);
FN_DECIMAL GetWhiteNoiseInt2D(int x, int y,int m_seed);
FN_DECIMAL SingleValue(unsigned char offset, FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,enum Interp m_interp);
FN_DECIMAL SingleValueFractalFBM(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,enum Interp m_inter,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain,FN_DECIMAL m_fractalBounding);
FN_DECIMAL SingleValueFractalBillow(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,enum Interp m_inter,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain,FN_DECIMAL m_fractalBounding);
FN_DECIMAL SingleValueFractalRigidMulti(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,enum Interp m_inter,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain);
FN_DECIMAL SingleValue2D(unsigned char offset, FN_DECIMAL x, FN_DECIMAL y,enum Interp m_interp);
FN_DECIMAL SingleSimplex(unsigned char offset, FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z);
FN_DECIMAL SingleSimplexFractalFBM(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain,FN_DECIMAL m_fractalBounding);
FN_DECIMAL SingleSimplexFractalBillow(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain,FN_DECIMAL m_fractalBounding);
FN_DECIMAL SingleSimplexFractalRigidMulti(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain);
FN_DECIMAL SingleSimplex2D(unsigned char offset, FN_DECIMAL x, FN_DECIMAL y);
FN_DECIMAL SingleSimplex4D(unsigned char offset, FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z, FN_DECIMAL w);
FN_DECIMAL SingleCubic(unsigned char offset, FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z);
FN_DECIMAL SingleCubicFractalFBM(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain,FN_DECIMAL m_fractalBounding);
FN_DECIMAL SingleCubicFractalBillow(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain,FN_DECIMAL m_fractalBounding);
FN_DECIMAL SingleCubicFractalRigidMulti(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain);
FN_DECIMAL SingleCubic2D(unsigned char offset, FN_DECIMAL x, FN_DECIMAL y);
FN_DECIMAL SingleCellular(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,int m_seed,enum CellularReturnType m_cellularReturnType,enum CellularDistanceFunction m_cellularDistanceFunction,FN_DECIMAL m_cellularJitter);
FN_DECIMAL SingleCellular2Edge(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z,int m_seed,enum CellularReturnType m_cellularReturnType,enum CellularDistanceFunction m_cellularDistanceFunction,FN_DECIMAL m_cellularJitter,int m_cellularDistanceIndex0,int m_cellularDistanceIndex1);
FN_DECIMAL SingleCellular2D(FN_DECIMAL x, FN_DECIMAL y,int m_seed,enum CellularReturnType m_cellularReturnType,enum CellularDistanceFunction m_cellularDistanceFunction,FN_DECIMAL m_cellularJitter);
FN_DECIMAL SingleCellular2D2Edge(FN_DECIMAL x, FN_DECIMAL y,int m_seed,enum CellularReturnType m_cellularReturnType,enum CellularDistanceFunction m_cellularDistanceFunction,FN_DECIMAL m_cellularJitter,int m_cellularDistanceIndex0,int m_cellularDistanceIndex1);
void SingleGradientPerturb2D(unsigned char offset, FN_DECIMAL warpAmp, FN_DECIMAL frequency, FN_DECIMAL *x, FN_DECIMAL* y,enum Interp m_interp);
void SingleGradientPerturb(unsigned char offset, FN_DECIMAL warpAmp, FN_DECIMAL frequency, FN_DECIMAL *x, FN_DECIMAL *y, FN_DECIMAL *z,enum Interp m_interp);
void GradientPerturbFractal(FN_DECIMAL* x, FN_DECIMAL *y,enum Interp m_interp,int m_octaves,FN_DECIMAL m_lacunarity,FN_DECIMAL m_gain,FN_DECIMAL m_fractalBounding,FN_DECIMAL m_gradientPerturbAmp,FN_DECIMAL m_frequency);
