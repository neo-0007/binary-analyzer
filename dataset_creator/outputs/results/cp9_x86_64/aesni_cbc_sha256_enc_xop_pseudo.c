
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_cbc_sha256_enc_xop(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long in_stack_00000008;
  
  in_stack_00000008 = in_stack_00000008 - param_1;
  auVar1 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000008 + param_1),_DAT_0048e880);
  auVar2 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000008 + 0x10 + param_1),_DAT_0048e880);
  auVar3 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000008 + 0x20 + param_1),_DAT_0048e880);
  vpaddd_avx(auVar1,_K256);
  auVar4 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000008 + 0x30 + param_1),_DAT_0048e880);
  vpaddd_avx(auVar2,_DAT_0048e6a0);
  vpaddd_avx(auVar3,_DAT_0048e6c0);
  vpaddd_avx(auVar4,_DAT_0048e6e0);
  vpalignr_avx(auVar2,auVar1,4);
  vpalignr_avx(auVar4,auVar3,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

