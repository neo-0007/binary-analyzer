
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChaCha20_4xop(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 (*in_RCX) [16];
  undefined1 (*in_R8) [16];
  
  auVar1 = *in_RCX;
  auVar2 = in_RCX[1];
  auVar3 = *in_R8;
  auVar4 = vpshufd_avx(s_expand_32_byte_k_004bafc0._0_16_,0);
  auVar5 = vpshufd_avx(s_expand_32_byte_k_004bafc0._0_16_,0x55);
  auVar6 = vpshufd_avx(s_expand_32_byte_k_004bafc0._0_16_,0xaa);
  auVar7 = vpshufd_avx(s_expand_32_byte_k_004bafc0._0_16_,0xff);
  auVar8 = vpshufd_avx(auVar1,0);
  auVar9 = vpshufd_avx(auVar1,0x55);
  auVar10 = vpshufd_avx(auVar1,0xaa);
  auVar1 = vpshufd_avx(auVar1,0xff);
  vpshufd_avx(auVar2,0);
  vpshufd_avx(auVar2,0x55);
  vpshufd_avx(auVar2,0xaa);
  vpshufd_avx(auVar2,0xff);
  auVar2 = vpshufd_avx(auVar3,0);
  vpshufd_avx(auVar3,0x55);
  vpaddd_avx(auVar2,_DAT_004bae20);
  vpshufd_avx(auVar3,0xaa);
  vpshufd_avx(auVar3,0xff);
  vpaddd_avx(auVar4,auVar8);
  vpaddd_avx(auVar5,auVar9);
  vpaddd_avx(auVar6,auVar10);
  vpaddd_avx(auVar7,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

