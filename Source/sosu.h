#ifndef SOSU_H
#define SOSU_H

/* ディレイタイム(0～255ms)→素数サンプル数変換テーブル */

// SAMPLING_FREQ 44.1kHz
const uint16_t sosu[256] = {
1, 43, 89, 131, 179, 223, 263, 307, 353, 397, 439, 487, 523, 571, 617, 661, 709, 751, 797, 839, 881, 929, 971, 1013, 1061, 1103, 1151, 1193, 1237, 1279, 1321, 1367, 1409, 1453, 1499, 1543, 1583, 1627, 1669, 1721, 1759, 1811, 1847, 1901, 1933, 1987, 2029, 2069, 2113, 2161, 2203, 2251, 2293, 2339, 2381, 2423, 2467, 2521, 2557, 2609, 2647, 2689, 2731, 2777, 2819, 2861, 2909, 2953, 2999, 3041, 3089, 3137, 3181, 3221, 3259, 3307, 3347, 3391, 3433, 3491, 3527, 3571, 3617, 3659, 3701, 3739, 3793, 3833, 3881, 3923, 3967, 4013, 4057, 4099, 4139, 4201, 4231, 4273, 4327, 4363, 4409, 4457, 4493, 4547, 4583, 4637, 4673, 4721, 4759, 4801, 4861, 4889, 4937, 4987, 5023, 5077, 5113, 5153, 5209, 5237, 5297, 5333, 5381, 5419, 5471, 5507, 5557, 5591, 5647, 5689, 5737, 5779, 5821, 5867, 5903, 5953, 6007, 6043, 6089, 6131, 6173, 6217, 6263, 6311, 6353, 6397, 6449, 6481, 6529, 6571, 6619, 6659, 6703, 6737, 6791, 6833, 6883, 6917, 6967, 7013, 7057, 7103, 7151, 7187, 7229, 7283, 7321, 7369, 7411, 7451, 7499, 7541, 7583, 7621, 7673, 7717, 7759, 7817, 7853, 7901, 7937, 7993, 8017, 8069, 8117, 8161, 8209, 8243, 8291, 8329, 8377, 8423, 8467, 8513, 8563, 8599, 8641, 8689, 8731, 8779, 8819, 8863, 8923, 8951, 8999, 9041, 9091, 9127, 9173, 9221, 9257, 9311, 9349, 9391, 9437, 9479, 9521, 9587, 9613, 9661, 9697, 9749, 9791, 9833, 9883, 9923, 9967, 10009, 10061, 10099, 10141, 10193, 10223, 10273, 10321, 10369, 10399, 10453, 10499, 10531, 10589, 10627, 10667, 10711, 10753, 10799, 10847, 10891, 10937, 10979, 11027, 11069, 11113, 11159, 11197, 11243
};

/*
// SAMPLING_FREQ 48kHz
const uint16_t sosu[256] = {
1, 47, 97, 139, 191, 239, 283, 337, 383, 431, 479, 523, 577, 619, 673, 719, 769, 811, 863, 911, 953, 1009, 1051, 1103, 1151, 1201, 1249, 1297, 1327, 1399, 1439, 1487, 1531, 1583, 1627, 1669, 1723, 1777, 1823, 1871, 1913, 1973, 2017, 2063, 2111, 2161, 2207, 2251, 2309, 2351, 2399, 2447, 2503, 2543, 2591, 2633, 2687, 2731, 2789, 2833, 2879, 2927, 2971, 3023, 3067, 3119, 3167, 3217, 3259, 3313, 3359, 3407, 3457, 3499, 3547, 3593, 3643, 3697, 3739, 3793, 3833, 3889, 3931, 3989, 4027, 4079, 4127, 4177, 4219, 4271, 4327, 4363, 4421, 4463, 4513, 4561, 4603, 4657, 4703, 4751, 4799, 4861, 4889, 4943, 4993, 5039, 5087, 5147, 5179, 5231, 5279, 5323, 5381, 5419, 5471, 5519, 5569, 5623, 5659, 5711, 5749, 5807, 5857, 5903, 5953, 6007, 6047, 6091, 6143, 6197, 6247, 6287, 6337, 6379, 6427, 6481, 6529, 6577, 6619, 6673, 6719, 6763, 6823, 6863, 6911, 6959, 7013, 7057, 7103, 7151, 7193, 7247, 7297, 7349, 7393, 7433, 7487, 7537, 7583, 7639, 7681, 7727, 7789, 7823, 7873, 7919, 7963, 8017, 8059, 8111, 8161, 8209, 8263, 8297, 8353, 8389, 8447, 8501, 8543, 8597, 8641, 8689, 8737, 8783, 8831, 8887, 8929, 8971, 9029, 9067, 9127, 9173, 9221, 9257, 9311, 9349, 9403, 9461, 9497, 9551, 9601, 9649, 9697, 9743, 9791, 9839, 9887, 9931, 9973, 10037, 10079, 10133, 10177, 10223, 10271, 10321, 10369, 10427, 10463, 10513, 10559, 10607, 10657, 10709, 10753, 10799, 10847, 10891, 10939, 10993, 11047, 11087, 11131, 11177, 11239, 11279, 11329, 11369, 11423, 11471, 11519, 11579, 11617, 11657, 11717, 11743, 11807, 11863, 11903, 11953, 12007, 12049, 12097, 12143, 12197, 12239
};
*/

#endif // SOSU_H
