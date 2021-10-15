 Time(%)  Total Time (ns)  Instances   Average   Minimum   Maximum                                                   Name                                                
 -------  ---------------  ---------  ---------  -------  ---------  ----------------------------------------------------------------------------------------------------
    42.4      613,471,960      7,945   77,214.8   43,491    155,530  void implicit_convolve_sgemm<float, float, 512, 6, 8, 3, 3, 5, 1, false, false, true>(int, int, int…
    12.5      180,082,053      1,323  136,116.4  117,703    139,016  void precomputed_convolve_sgemm<float, 512, 6, 8, 3, 3, 5, 1, false>(int, int, int, float const*, i…
     9.8      141,622,723     18,508    7,652.0    2,208     34,402  void tensorflow::functor::ShuffleInTensor3Simple<float, 2, 1, 0, false>(int, float const*, tensorfl…
     7.0      101,133,998     35,694    2,833.4    2,336      4,160  void tensorflow::functor::FusedBatchNormInferenceMetaKernel<float, float, (tensorflow::TensorFormat…
     2.8       41,007,329        336  122,045.6  121,159    125,576  redzone_checker                                                                                     
     2.4       34,465,129      7,932    4,345.1    3,264      6,496  void tensorflow::DepthwiseConv2dGPUKernelNCHW<float, 3, 3, 1>(tensorflow::DepthwiseArgs, float cons…
     2.2       32,318,600      1,323   24,428.3   21,154     25,121  void precomputed_convolve_sgemm<float, 512, 6, 7, 4, 3, 5, 1, false>(int, int, int, float const*, i…
     2.0       29,445,970      5,304    5,551.7    2,624    147,273  void nchwToNhwcKernel<float, float, float, true, false, (cudnnKernelDataType_t)2>(int, int, int, in…
     1.7       24,968,048      7,932    3,147.8    2,688      4,128  void tensorflow::DepthwiseConv2dGPUKernelNCHWSmall<float, (tensorflow::DepthwiseConv2dDirection)0, …
     1.4       20,394,784      2,653    7,687.4    5,120     12,097  void implicit_convolve_sgemm<float, float, 1024, 5, 5, 3, 3, 3, 1, false, false, true>(int, int, in…
     1.4       20,025,961      1,324   15,125.3   10,529     15,841  void cutlass::Kernel<cutlass_tensorop_s1688fprop_optimized_tf32_128x128_16x4>(cutlass_tensorop_s168…
     1.3       19,174,877      1,323   14,493.5   12,513     15,137  void cutlass::Kernel<cutlass_tensorop_s1688fprop_optimized_tf32_64x128_16x6>(cutlass_tensorop_s1688…
     1.2       17,648,011      1,322   13,349.5   12,033     14,241  ampere_sgemm_64x32_sliced1x4_nn                                                                     
     1.2       17,437,299      1,328   13,130.5   11,233     26,402  void implicit_convolve_sgemm<float, float, 128, 6, 7, 3, 3, 5, 1, false, false, true>(int, int, int…
     1.1       15,341,681      1,322   11,604.9    9,953     12,288  void cutlass::Kernel<cutlass_80_tensorop_s1688gemm_64x64_16x6_nn_align1>(cutlass_80_tensorop_s1688g…
     0.8       12,238,380         24  509,932.5    5,217  3,181,858  void fft2d_r2c_16x16<float>(float2*, float const*, int, int, int, int, int, int, int, int)          
     0.8       11,488,158         16  718,009.9   95,782  2,896,721  void gemv2T_kernel_val<int, int, float2, float2, float2, float2, 128, 16, 2, 2, false, false, cubla…
     0.6        8,007,017      2,651    3,020.4    2,560      3,712  void nhwcToNchwKernel<float, float, float, true, false, (cudnnKernelDataType_t)0>(int, int, int, in…
     0.5        7,172,903      1,342    5,344.9    3,840    109,095  void cudnn::cnn::im2col4d_kernel<float, long>(cudnn::cnn::im2col4d_params, cudnnConvolutionStruct, …
     0.5        7,039,342      2,647    2,659.4    1,856      3,968  void cudnn::cnn::kern_precompute_indices<false>(int*, int, int, int, int, int, int)                 
     0.5        6,985,329      2,644    2,642.0    2,304      3,264  void tensorflow::GatherOpKernel<tensorflow::AlignedVector<float, 4>, int, true>(tensorflow::Aligned…
     0.5        6,980,494      2,644    2,640.1    2,080      3,488  Mul_GPU_DT_FLOAT_DT_FLOAT_kernel                                                                    
     0.4        6,172,343      1,324    4,661.9    3,968      5,344  void explicit_convolve_sgemm<float, int, 1024, 5, 5, 3, 3, 3, 0, false>(int, int, int, float const*…
     0.4        5,436,872      1,322    4,112.6    3,616      4,673  void tensorflow::DepthwiseConv2dGPUKernelNCHWSmall<float, (tensorflow::DepthwiseConv2dDirection)0, …
     0.3        4,926,191      1,322    3,726.3    3,168      4,513  void vector_fft_r2c<512u, 16u, 1u, (padding_t)6, (twiddle_t)0, (loadstore_modifier_t)2, (layout_t)0…
     0.3        4,204,909      1,322    3,180.7    2,816      3,744  void splitKreduce_kernel<float, float, float, float>(cublasSplitKParams<float>, float const*, float…
     0.3        4,185,248         18  232,513.8    4,288  1,056,353  void flip_filter<float, float>(float*, float const*, int, int, int, int)                            
     0.3        4,058,500      1,322    3,070.0    2,688      3,649  void tensorflow::functor::PadInputCustomKernelNCHW<float, 4>(int, float const*, tensorflow::functor…
     0.3        4,054,194      1,322    3,066.7    2,688      3,616  void Eigen::internal::EigenMetaKernel<Eigen::TensorEvaluator<Eigen::TensorAssignOp<Eigen::TensorMap…
     0.3        3,925,020      1,322    2,969.0    2,624      3,552  void tensorflow::functor::RowReduceKernel<float*, tensorflow::TransformOutputIterator<float, float,…
     0.3        3,718,811      1,322    2,813.0    2,464      3,392  void Eigen::internal::EigenMetaKernel<Eigen::TensorEvaluator<Eigen::TensorAssignOp<Eigen::TensorMap…
     0.2        3,565,770      1,322    2,697.3    2,336      3,264  AddV2_GPU_DT_FLOAT_DT_FLOAT_kernel                                                                  
     0.2        3,480,164      1,322    2,632.5    2,304      3,648  void Eigen::internal::EigenMetaKernel<Eigen::TensorEvaluator<Eigen::TensorAssignOp<Eigen::TensorMap…
     0.2        3,259,825      1,322    2,465.8    2,144      3,136  void tensorflow::BiasNHWCKernel<float>(int, float const*, float const*, float*, int)                
     0.2        3,115,380      1,322    2,356.6    2,048      2,976  Log_GPU_DT_FLOAT_DT_FLOAT_kernel                                                                    
     0.2        3,000,696         18  166,705.3   14,209    719,724  void fft1d_r2c_32<float, float, float2, true, false>(float2*, float const*, int, int3, int3, int2, …
     0.2        2,988,582      1,322    2,260.7    1,920      3,104  Cast_GPU_DT_INT32_DT_FLOAT_kernel                                                                   
     0.2        2,972,382      1,322    2,248.4    1,984      2,912  ComplexAbs_GPU_DT_COMPLEX64_DT_FLOAT_kernel                                                         
     0.2        2,908,214        288   10,098.0    6,464     16,065  void gemv2T_kernel_val<int, int, float2, float2, float2, float2, 128, 16, 4, 4, false, false, cubla…
     0.2        2,866,807      1,322    2,168.5    1,888      2,784  Ceil_GPU_DT_FLOAT_DT_FLOAT_kernel                                                                   
     0.2        2,674,004      1,322    2,022.7    1,792      2,592  Cast_GPU_DT_FLOAT_DT_INT32_kernel                                                                   
     0.2        2,523,387         18  140,188.2    7,681    594,788  ampere_gcgemm_64x64_nt                                                                              
     0.0          670,250          8   83,781.3   43,299    142,664  void explicit_convolve_sgemm<float, int, 512, 6, 8, 3, 3, 5, 0, false>(int, int, int, float const*,…
     0.0          548,034          4  137,008.5   93,734    178,731  void fft2d_r2c_32x32<float, false, 1u, false>(float2*, float const*, int, int, int, int, int, int, …
     0.0          443,354          6   73,892.3    5,888    217,645  void transpose_readWrite_alignment_kernel<float2, float2, 1, false, 6, 4, 4>(cublasTransposeParams<…
     0.0          286,868         18   15,937.1   11,585     20,993  void fft1d_r2c_32<float, float, float2, false, false>(float2*, float const*, int, int3, int3, int2,…
     0.0          267,730          4   66,932.5   25,250    123,656  void fft2d_r2c_64x64<float, true>(float2*, float const*, int, int, int, int, int, int, int, int)    
     0.0          184,044         24    7,668.5    7,424      8,320  void fft2d_c2r_32x32<float, true, false, 0u, false, false>(float*, float2 const*, int, int, int, in…
     0.0          168,460         28    6,016.4    2,400     22,497  void fft2d_r2c_32x32<float, false, 0u, false>(float2*, float const*, int, int, int, int, int, int, …
     0.0          125,642          6   20,940.3   12,481     31,234  void explicit_convolve_sgemm<float, int, 1024, 6, 7, 3, 3, 5, 0, false>(int, int, int, float const*…
     0.0           88,135         24    3,672.3    3,552      4,128  void gemmk1_kernel<float2, 256, 5, false, false, true, false, cublasGemvTensorStridedBatched<float2…
     0.0           88,038          2   44,019.0   43,715     44,323  void cutlass::Kernel<cutlass_tensorop_s1688fprop_optimized_tf32_64x256_16x4>(cutlass_tensorop_s1688…
     0.0           83,718         12    6,976.5    6,016      8,641  void fft2d_c2r_16x16<float, false>(float*, float2*, int, int, int, int, int, int, int, int, int, in…
     0.0           83,237          1   83,237.0   83,237     83,237  void cutlass::Kernel<cutlass_tensorop_s1688fprop_optimized_tf32_128x128_32x3>(cutlass_tensorop_s168…
     0.0           74,950         18    4,163.9    3,552      4,897  void fft1d_c2r_32<float2, float, float, false, true, false, false>(float*, float2 const*, int, int3…
     0.0           60,739          2   30,369.5   25,633     35,106  void xmma_cudnn::gemm::kernel<xmma_cudnn::implicit_gemm::fprop::Kernel_traits<xmma_cudnn::Ampere_hm…
     0.0           41,347          2   20,673.5   19,713     21,634  void tensorTransformGeneric<float, float, float, true, false, false, (cudnnKernelDataType_t)2>(cudn…
     0.0           36,546          4    9,136.5    8,992      9,408  void fft2d_c2r_32x32<float, false, false, 1u, false, false>(float*, float2 const*, int, int, int, i…
     0.0           33,698          2   16,849.0   16,833     16,865  void explicit_convolve_sgemm<float, int, 128, 6, 7, 3, 3, 5, 0, false>(int, int, int, float const*,…
     0.0           22,946          1   22,946.0   22,946     22,946  void precomputed_convolve_sgemm<float, 128, 6, 7, 3, 3, 5, 1, false>(int, int, int, float const*, i…
     0.0           18,690          1   18,690.0   18,690     18,690  void cutlass::Kernel<cutlass_tensorop_s1688fprop_optimized_tf32_256x64_16x4>(cutlass_tensorop_s1688…
     0.0           17,888          2    8,944.0    8,864      9,024  void fft2d_r2c_32x32<float, false, 1u, true>(float2*, float const*, int, int, int, int, int, int, i…
     0.0           17,857          2    8,928.5    8,928      8,929  void fft2d_c2r_64x64<float, false, true>(float*, float2*, int, int, int, int, int, int, int, int, i…
     0.0           13,696          2    6,848.0    6,816      6,880  void explicit_convolve_sgemm<float, int, 128, 5, 5, 3, 3, 3, 0, false>(int, int, int, float const*,…