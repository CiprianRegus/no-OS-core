/***************************************************************************//**
 *   @file   ADRV9025_TxAttenTable.h
 *   @brief  adrv9025 TX attenuation table.
 *   @author GMois (george.mois@analog.com)
********************************************************************************
 * Copyright 2023(c) Analog Devices, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES, INC. “AS IS” AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL ANALOG DEVICES, INC. BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/
#ifndef ADRV9025_TX_ATTEN_TABLE_H
#define ADRV9025_TX_ATTEN_TABLE_H

const char *ADRV9025_TxAttenTable_text =
	"Tx Atten Index,Tx Atten Hp,Tx Atten Mult\n\
0,0,4095\n\
1,0,4072\n\
2,0,4049\n\
3,1,4090\n\
4,1,4066\n\
5,1,4043\n\
6,2,4085\n\
7,2,4061\n\
8,2,4038\n\
9,3,4080\n\
10,3,4057\n\
11,3,4034\n\
12,4,4077\n\
13,4,4054\n\
14,4,4031\n\
15,5,4076\n\
16,5,4052\n\
17,5,4029\n\
18,6,4075\n\
19,6,4051\n\
20,6,4028\n\
21,7,4075\n\
22,7,4052\n\
23,7,4029\n\
24,8,4077\n\
25,8,4054\n\
26,8,4030\n\
27,9,4080\n\
28,9,4057\n\
29,9,4033\n\
30,10,4085\n\
31,10,4061\n\
32,10,4038\n\
33,11,4090\n\
34,11,4067\n\
35,11,4044\n\
36,11,4020\n\
37,12,4074\n\
38,12,4051\n\
39,12,4028\n\
40,13,4083\n\
41,13,4059\n\
42,13,4036\n\
43,14,4093\n\
44,14,4070\n\
45,14,4046\n\
46,14,4023\n\
47,15,4082\n\
48,15,4058\n\
49,15,4035\n\
50,16,4095\n\
51,16,4072\n\
52,16,4049\n\
53,16,4025\n\
54,17,4087\n\
55,17,4064\n\
56,17,4041\n\
57,17,4017\n\
58,18,4081\n\
59,18,4058\n\
60,18,4034\n\
61,18,4011\n\
62,19,4077\n\
63,19,4053\n\
64,19,4030\n\
65,19,4007\n\
66,20,4075\n\
67,20,4051\n\
68,20,4028\n\
69,20,4005\n\
70,21,4074\n\
71,21,4051\n\
72,21,4028\n\
73,21,4005\n\
74,22,4077\n\
75,22,4053\n\
76,22,4030\n\
77,22,4007\n\
78,23,4081\n\
79,23,4057\n\
80,23,4034\n\
81,23,4011\n\
82,24,4088\n\
83,24,4064\n\
84,24,4041\n\
85,24,4018\n\
86,24,3995\n\
87,25,4074\n\
88,25,4050\n\
89,25,4027\n\
90,25,4004\n\
91,26,4086\n\
92,26,4062\n\
93,26,4039\n\
94,26,4016\n\
95,26,3993\n\
96,27,4077\n\
97,27,4054\n\
98,27,4030\n\
99,27,4007\n\
100,28,4095\n\
101,28,4071\n\
102,28,4048\n\
103,28,4025\n\
104,28,4002\n\
105,29,4092\n\
106,29,4069\n\
107,29,4045\n\
108,29,4022\n\
109,29,3999\n\
110,30,4093\n\
111,30,4070\n\
112,30,4046\n\
113,30,4023\n\
114,30,4000\n\
115,30,3977\n\
116,31,4074\n\
117,31,4051\n\
118,31,4027\n\
119,31,4004\n\
120,31,3981\n\
121,32,4082\n\
122,32,4059\n\
123,32,4035\n\
124,32,4012\n\
125,32,3989\n\
126,33,4094\n\
127,33,4071\n\
128,33,4047\n\
129,33,4024\n\
130,33,4001\n\
131,33,3978\n\
132,34,4087\n\
133,34,4064\n\
134,34,4040\n\
135,34,4017\n\
136,34,3994\n\
137,34,3971\n\
138,35,4085\n\
139,35,4061\n\
140,35,4038\n\
141,35,4015\n\
142,35,3992\n\
143,35,3969\n\
144,36,4087\n\
145,36,4063\n\
146,36,4040\n\
147,36,4017\n\
148,36,3994\n\
149,36,3971\n\
150,37,4094\n\
151,37,4071\n\
152,37,4047\n\
153,37,4024\n\
154,37,4001\n\
155,37,3978\n\
156,37,3955\n\
157,38,4084\n\
158,38,4060\n\
159,38,4037\n\
160,38,4014\n\
161,38,3991\n\
162,38,3968\n\
163,38,3945\n\
164,39,4079\n\
165,39,4056\n\
166,39,4033\n\
167,39,4010\n\
168,39,3987\n\
169,39,3964\n\
170,39,3941\n\
171,40,4082\n\
172,40,4058\n\
173,40,4035\n\
174,40,4012\n\
175,40,3989\n\
176,40,3966\n\
177,40,3943\n\
178,41,4091\n\
179,41,4067\n\
180,41,4044\n\
181,41,4021\n\
182,41,3998\n\
183,41,3975\n\
184,41,3952\n\
185,41,3929\n\
186,42,4084\n\
187,42,4061\n\
188,42,4038\n\
189,42,4014\n\
190,42,3991\n\
191,42,3968\n\
192,42,3946\n\
193,42,3923\n\
194,43,4086\n\
195,43,4063\n\
196,43,4039\n\
197,43,4016\n\
198,43,3993\n\
199,43,3970\n\
200,43,3947\n\
201,43,3925\n\
202,43,3902\n\
203,44,4074\n\
204,44,4051\n\
205,44,4027\n\
206,44,4004\n\
207,44,3981\n\
208,44,3958\n\
209,44,3936\n\
210,44,3913\n\
211,45,4095\n\
212,45,4072\n\
213,45,4048\n\
214,45,4025\n\
215,45,4002\n\
216,45,3979\n\
217,45,3956\n\
218,45,3934\n\
219,45,3911\n\
220,45,3889\n\
221,46,4081\n\
222,46,4058\n\
223,46,4034\n\
224,46,4011\n\
225,46,3988\n\
226,46,3965\n\
227,46,3942\n\
228,46,3920\n\
229,46,3897\n\
230,46,3875\n\
231,47,4079\n\
232,47,4056\n\
233,47,4033\n\
234,47,4010\n\
235,47,3986\n\
236,47,3964\n\
237,47,3941\n\
238,47,3918\n\
239,47,3896\n\
240,47,3873\n\
241,48,4092\n\
242,48,4068\n\
243,48,4045\n\
244,48,4022\n\
245,48,3999\n\
246,48,3976\n\
247,48,3953\n\
248,48,3930\n\
249,48,3908\n\
250,48,3885\n\
251,48,3863\n\
252,48,3841\n\
253,49,4073\n\
254,49,4050\n\
255,49,4027\n\
256,49,4004\n\
257,49,3981\n\
258,49,3958\n\
259,49,3935\n\
260,49,3912\n\
261,49,3890\n\
262,49,3868\n\
263,49,3845\n\
264,49,3823\n\
265,50,4073\n\
266,50,4050\n\
267,50,4026\n\
268,50,4003\n\
269,50,3980\n\
270,50,3957\n\
271,50,3935\n\
272,50,3912\n\
273,50,3890\n\
274,50,3867\n\
275,50,3845\n\
276,50,3823\n\
277,51,4094\n\
278,51,4070\n\
279,51,4047\n\
280,51,4023\n\
281,51,4000\n\
282,51,3977\n\
283,51,3955\n\
284,51,3932\n\
285,51,3909\n\
286,51,3887\n\
287,51,3865\n\
288,51,3842\n\
289,51,3820\n\
290,51,3798\n\
291,52,4091\n\
292,52,4068\n\
293,52,4044\n\
294,52,4021\n\
295,52,3998\n\
296,52,3975\n\
297,52,3952\n\
298,52,3930\n\
299,52,3907\n\
300,52,3885\n\
301,52,3862\n\
302,52,3840\n\
303,52,3818\n\
304,52,3796\n\
305,52,3774\n\
306,53,4094\n\
307,53,4070\n\
308,53,4047\n\
309,53,4024\n\
310,53,4001\n\
311,53,3978\n\
312,53,3955\n\
313,53,3932\n\
314,53,3910\n\
315,53,3887\n\
316,53,3865\n\
317,53,3843\n\
318,53,3821\n\
319,53,3799\n\
320,53,3777\n\
321,53,3755\n\
322,53,3734\n\
323,54,4084\n\
324,54,4060\n\
325,54,4037\n\
326,54,4014\n\
327,54,3991\n\
328,54,3968\n\
329,54,3945\n\
330,54,3922\n\
331,54,3900\n\
332,54,3877\n\
333,54,3855\n\
334,54,3833\n\
335,54,3811\n\
336,54,3789\n\
337,54,3767\n\
338,54,3746\n\
339,54,3724\n\
340,54,3703\n\
341,55,4091\n\
342,55,4067\n\
343,55,4044\n\
344,55,4021\n\
345,55,3998\n\
346,55,3975\n\
347,55,3952\n\
348,55,3929\n\
349,55,3907\n\
350,55,3884\n\
351,55,3862\n\
352,55,3840\n\
353,55,3818\n\
354,55,3796\n\
355,55,3774\n\
356,55,3752\n\
357,55,3731\n\
358,55,3709\n\
359,55,3688\n\
360,55,3667\n\
361,55,3646\n\
362,56,4078\n\
363,56,4055\n\
364,56,4031\n\
365,56,4008\n\
366,56,3985\n\
367,56,3962\n\
368,56,3940\n\
369,56,3917\n\
370,56,3894\n\
371,56,3872\n\
372,56,3850\n\
373,56,3828\n\
374,56,3806\n\
375,56,3784\n\
376,56,3762\n\
377,56,3741\n\
378,56,3719\n\
379,56,3698\n\
380,56,3677\n\
381,56,3656\n\
382,56,3635\n\
383,56,3614\n\
384,56,3593\n\
385,57,4083\n\
386,57,4059\n\
387,57,4036\n\
388,57,4013\n\
389,57,3990\n\
390,57,3967\n\
391,57,3944\n\
392,57,3921\n\
393,57,3899\n\
394,57,3877\n\
395,57,3854\n\
396,57,3832\n\
397,57,3810\n\
398,57,3788\n\
399,57,3767\n\
400,57,3745\n\
401,57,3723\n\
402,57,3702\n\
403,57,3681\n\
404,57,3660\n\
405,57,3639\n\
406,57,3618\n\
407,57,3597\n\
408,57,3576\n\
409,57,3556\n\
410,57,3535\n\
411,57,3515\n\
412,58,4077\n\
413,58,4054\n\
414,58,4031\n\
415,58,4008\n\
416,58,3985\n\
417,58,3962\n\
418,58,3939\n\
419,58,3916\n\
420,58,3894\n\
421,58,3872\n\
422,58,3849\n\
423,58,3827\n\
424,58,3805\n\
425,58,3783\n\
426,58,3762\n\
427,58,3740\n\
428,58,3719\n\
429,58,3697\n\
430,58,3676\n\
431,58,3655\n\
432,58,3634\n\
433,58,3613\n\
434,58,3592\n\
435,58,3572\n\
436,58,3551\n\
437,58,3531\n\
438,58,3511\n\
439,58,3491\n\
440,58,3470\n\
441,58,3451\n\
442,58,3431\n\
443,59,4093\n\
444,59,4070\n\
445,59,4046\n\
446,59,4023\n\
447,59,4000\n\
448,59,3977\n\
449,59,3954\n\
450,59,3932\n\
451,59,3909\n\
452,59,3887\n\
453,59,3864\n\
454,59,3842\n\
455,59,3820\n\
456,59,3798\n\
457,59,3776\n\
458,59,3755\n\
459,59,3733\n\
460,59,3712\n\
461,59,3690\n\
462,59,3669\n\
463,59,3648\n\
464,59,3627\n\
465,59,3606\n\
466,59,3586\n\
467,59,3565\n\
468,59,3545\n\
469,59,3524\n\
470,59,3504\n\
471,59,3484\n\
472,59,3464\n\
473,59,3444\n\
474,59,3424\n\
475,59,3405\n\
476,59,3385\n\
477,59,3366\n\
478,59,3346\n\
479,59,3327\n\
480,59,3308\n\
481,59,3289\n\
482,60,4088\n\
483,60,4064\n\
484,60,4041\n\
485,60,4018\n\
486,60,3995\n\
487,60,3972\n\
488,60,3949\n\
489,60,3926\n\
490,60,3904\n\
491,60,3881\n\
492,60,3859\n\
493,60,3837\n\
494,60,3815\n\
495,60,3793\n\
496,60,3771\n\
497,60,3750\n\
498,60,3728\n\
499,60,3707\n\
500,60,3685\n\
501,60,3664\n\
502,60,3643\n\
503,60,3622\n\
504,60,3601\n\
505,60,3581\n\
506,60,3560\n\
507,60,3540\n\
508,60,3519\n\
509,60,3499\n\
510,60,3479\n\
511,60,3459\n\
512,60,3439\n\
513,60,3420\n\
514,60,3400\n\
515,60,3380\n\
516,60,3361\n\
517,60,3342\n\
518,60,3323\n\
519,60,3304\n\
520,60,3285\n\
521,60,3266\n\
522,60,3247\n\
523,60,3228\n\
524,60,3210\n\
525,60,3191\n\
526,60,3173\n\
527,60,3155\n\
528,60,3137\n\
529,60,3119\n\
530,60,3101\n\
531,60,3083\n\
532,61,4087\n\
533,61,4064\n\
534,61,4040\n\
535,61,4017\n\
536,61,3994\n\
537,61,3971\n\
538,61,3948\n\
539,61,3926\n\
540,61,3903\n\
541,61,3881\n\
542,61,3859\n\
543,61,3836\n\
544,61,3814\n\
545,61,3792\n\
546,61,3771\n\
547,61,3749\n\
548,61,3728\n\
549,61,3706\n\
550,61,3685\n\
551,61,3664\n\
552,61,3643\n\
553,61,3622\n\
554,61,3601\n\
555,61,3580\n\
556,61,3560\n\
557,61,3539\n\
558,61,3519\n\
559,61,3499\n\
560,61,3479\n\
561,61,3459\n\
562,61,3439\n\
563,61,3419\n\
564,61,3400\n\
565,61,3380\n\
566,61,3361\n\
567,61,3341\n\
568,61,3322\n\
569,61,3303\n\
570,61,3284\n\
571,61,3265\n\
572,61,3247\n\
573,61,3228\n\
574,61,3209\n\
575,61,3191\n\
576,61,3173\n\
577,61,3154\n\
578,61,3136\n\
579,61,3118\n\
580,61,3100\n\
581,61,3083\n\
582,61,3065\n\
583,61,3047\n\
584,61,3030\n\
585,61,3012\n\
586,61,2995\n\
587,61,2978\n\
588,61,2961\n\
589,61,2944\n\
590,61,2927\n\
591,61,2910\n\
592,61,2893\n\
593,61,2877\n\
594,61,2860\n\
595,61,2844\n\
596,61,2828\n\
597,61,2811\n\
598,61,2795\n\
599,61,2779\n\
600,61,2763\n\
601,61,2747\n\
602,61,2732\n\
603,62,4074\n\
604,62,4051\n\
605,62,4027\n\
606,62,4004\n\
607,62,3981\n\
608,62,3958\n\
609,62,3936\n\
610,62,3913\n\
611,62,3891\n\
612,62,3868\n\
613,62,3846\n\
614,62,3824\n\
615,62,3802\n\
616,62,3780\n\
617,62,3758\n\
618,62,3737\n\
619,62,3715\n\
620,62,3694\n\
621,62,3673\n\
622,62,3652\n\
623,62,3631\n\
624,62,3610\n\
625,62,3589\n\
626,62,3569\n\
627,62,3548\n\
628,62,3528\n\
629,62,3508\n\
630,62,3487\n\
631,62,3467\n\
632,62,3448\n\
633,62,3428\n\
634,62,3408\n\
635,62,3389\n\
636,62,3369\n\
637,62,3350\n\
638,62,3331\n\
639,62,3311\n\
640,62,3292\n\
641,62,3273\n\
642,62,3255\n\
643,62,3236\n\
644,62,3217\n\
645,62,3199\n\
646,62,3181\n\
647,62,3162\n\
648,62,3144\n\
649,62,3126\n\
650,62,3108\n\
651,62,3090\n\
652,62,3073\n\
653,62,3055\n\
654,62,3037\n\
655,62,3020\n\
656,62,3003\n\
657,62,2985\n\
658,62,2968\n\
659,62,2951\n\
660,62,2934\n\
661,62,2917\n\
662,62,2901\n\
663,62,2884\n\
664,62,2868\n\
665,62,2851\n\
666,62,2835\n\
667,62,2818\n\
668,62,2802\n\
669,62,2786\n\
670,62,2770\n\
671,62,2754\n\
672,62,2738\n\
673,62,2723\n\
674,62,2707\n\
675,62,2692\n\
676,62,2676\n\
677,62,2661\n\
678,62,2646\n\
679,62,2630\n\
680,62,2615\n\
681,62,2600\n\
682,62,2585\n\
683,62,2570\n\
684,62,2556\n\
685,62,2541\n\
686,62,2526\n\
687,62,2512\n\
688,62,2498\n\
689,62,2483\n\
690,62,2469\n\
691,62,2455\n\
692,62,2441\n\
693,62,2427\n\
694,62,2413\n\
695,62,2399\n\
696,62,2385\n\
697,62,2371\n\
698,62,2358\n\
699,62,2344\n\
700,62,2331\n\
701,62,2317\n\
702,62,2304\n\
703,62,2291\n\
704,62,2278\n\
705,62,2265\n\
706,62,2252\n\
707,62,2239\n\
708,62,2226\n\
709,62,2213\n\
710,62,2200\n\
711,62,2188\n\
712,62,2175\n\
713,62,2163\n\
714,62,2150\n\
715,62,2138\n\
716,62,2126\n\
717,62,2114\n\
718,62,2101\n\
719,62,2089\n\
720,62,2077\n\
721,62,2065\n\
722,62,2054\n\
723,63,4084\n\
724,63,4060\n\
725,63,4037\n\
726,63,4014\n\
727,63,3991\n\
728,63,3968\n\
729,63,3945\n\
730,63,3922\n\
731,63,3900\n\
732,63,3877\n\
733,63,3855\n\
734,63,3833\n\
735,63,3811\n\
736,63,3789\n\
737,63,3767\n\
738,63,3746\n\
739,63,3724\n\
740,63,3703\n\
741,63,3682\n\
742,63,3660\n\
743,63,3639\n\
744,63,3619\n\
745,63,3598\n\
746,63,3577\n\
747,63,3557\n\
748,63,3536\n\
749,63,3516\n\
750,63,3496\n\
751,63,3476\n\
752,63,3456\n\
753,63,3436\n\
754,63,3416\n\
755,63,3397\n\
756,63,3377\n\
757,63,3358\n\
758,63,3338\n\
759,63,3319\n\
760,63,3300\n\
761,63,3281\n\
762,63,3262\n\
763,63,3244\n\
764,63,3225\n\
765,63,3207\n\
766,63,3188\n\
767,63,3170\n\
768,63,3152\n\
769,63,3134\n\
770,63,3116\n\
771,63,3098\n\
772,63,3080\n\
773,63,3062\n\
774,63,3045\n\
775,63,3027\n\
776,63,3010\n\
777,63,2993\n\
778,63,2975\n\
779,63,2958\n\
780,63,2941\n\
781,63,2924\n\
782,63,2908\n\
783,63,2891\n\
784,63,2874\n\
785,63,2858\n\
786,63,2841\n\
787,63,2825\n\
788,63,2809\n\
789,63,2793\n\
790,63,2777\n\
791,63,2761\n\
792,63,2745\n\
793,63,2729\n\
794,63,2714\n\
795,63,2698\n\
796,63,2683\n\
797,63,2667\n\
798,63,2652\n\
799,63,2637\n\
800,63,2621\n\
801,63,2606\n\
802,63,2591\n\
803,63,2577\n\
804,63,2562\n\
805,63,2547\n\
806,63,2532\n\
807,63,2518\n\
808,63,2503\n\
809,63,2489\n\
810,63,2475\n\
811,63,2461\n\
812,63,2446\n\
813,63,2432\n\
814,63,2418\n\
815,63,2405\n\
816,63,2391\n\
817,63,2377\n\
818,63,2363\n\
819,63,2350\n\
820,63,2336\n\
821,63,2323\n\
822,63,2310\n\
823,63,2296\n\
824,63,2283\n\
825,63,2270\n\
826,63,2257\n\
827,63,2244\n\
828,63,2231\n\
829,63,2218\n\
830,63,2206\n\
831,63,2193\n\
832,63,2180\n\
833,63,2168\n\
834,63,2155\n\
835,63,2143\n\
836,63,2131\n\
837,63,2119\n\
838,63,2106\n\
839,63,2094\n\
840,62,4095\n\
841,62,4074\n\
842,62,4051\n\
843,62,4027\n\
844,62,4004\n\
845,62,3981\n\
846,62,3958\n\
847,62,3936\n\
848,62,3913\n\
849,62,3891\n\
850,62,3868\n\
851,62,3846\n\
852,62,3824\n\
853,62,3802\n\
854,62,3780\n\
855,62,3758\n\
856,62,3737\n\
857,62,3715\n\
858,62,3694\n\
859,62,3673\n\
860,62,3652\n\
861,62,3631\n\
862,62,3610\n\
863,62,3589\n\
864,62,3569\n\
865,62,3548\n\
866,62,3528\n\
867,62,3508\n\
868,62,3487\n\
869,62,3467\n\
870,62,3448\n\
871,62,3428\n\
872,62,3408\n\
873,62,3389\n\
874,62,3369\n\
875,62,3350\n\
876,62,3331\n\
877,62,3311\n\
878,62,3292\n\
879,62,3273\n\
880,62,3255\n\
881,62,3236\n\
882,62,3217\n\
883,62,3199\n\
884,62,3181\n\
885,62,3162\n\
886,62,3144\n\
887,62,3126\n\
888,62,3108\n\
889,62,3090\n\
890,62,3073\n\
891,62,3055\n\
892,62,3037\n\
893,62,3020\n\
894,62,3003\n\
895,62,2985\n\
896,62,2968\n\
897,62,2951\n\
898,62,2934\n\
899,62,2917\n\
900,62,2901\n\
901,62,2884\n\
902,62,2868\n\
903,62,2851\n\
904,62,2835\n\
905,62,2818\n\
906,62,2802\n\
907,62,2786\n\
908,62,2770\n\
909,62,2754\n\
910,62,2738\n\
911,62,2723\n\
912,62,2707\n\
913,62,2692\n\
914,62,2676\n\
915,62,2661\n\
916,62,2646\n\
917,62,2630\n\
918,62,2615\n\
919,62,2600\n\
920,62,2585\n\
921,62,2570\n\
922,62,2556\n\
923,62,2541\n\
924,62,2526\n\
925,62,2512\n\
926,62,2498\n\
927,62,2483\n\
928,62,2469\n\
929,62,2455\n\
930,62,2441\n\
931,62,2427\n\
932,62,2413\n\
933,62,2399\n\
934,62,2385\n\
935,62,2371\n\
936,62,2358\n\
937,62,2344\n\
938,62,2331\n\
939,62,2317\n\
940,62,2304\n\
941,62,2291\n\
942,62,2278\n\
943,62,2265\n\
944,62,2252\n\
945,62,2239\n\
946,62,2226\n\
947,62,2213\n\
948,62,2200\n\
949,62,2188\n\
950,62,2175\n\
951,62,2163\n\
952,62,2150\n\
953,62,2138\n\
954,62,2126\n\
955,62,2114\n\
956,62,2101\n\
957,62,2089\n\
958,62,2077\n\
959,62,2065\n";

#endif

