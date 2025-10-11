
void RSAZ_1024_mod_exp_avx2
               (undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  undefined1 local_1648 [8];
  undefined1 local_1640 [320];
  undefined1 local_1500 [320];
  undefined1 local_13c0 [320];
  undefined1 local_1280 [4672];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = local_1640;
  puVar4 = local_13c0;
  puVar5 = local_1500;
  if ((ulong)((uint)local_1640 & 0xfff) + 0x140 >> 0xc != 0) {
    puVar3 = local_13c0;
    puVar4 = local_1500;
    puVar5 = local_1640;
  }
  rsaz_1024_norm2red_avx2(puVar3,param_4);
  rsaz_1024_norm2red_avx2(puVar4,param_2);
  rsaz_1024_norm2red_avx2(local_1280,param_5);
  rsaz_1024_mul_avx2(local_1280,local_1280,local_1280,puVar3,param_6);
  rsaz_1024_mul_avx2(local_1280,local_1280,two80,puVar3,param_6);
  rsaz_1024_mul_avx2(puVar5,local_1280,one,puVar3,param_6);
  rsaz_1024_mul_avx2(puVar4,puVar4,local_1280,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0);
  rsaz_1024_scatter5_avx2(local_1280,puVar4,1);
  rsaz_1024_sqr_avx2(puVar5,puVar4,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,2);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,4);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,8);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x10);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x11);
  rsaz_1024_gather5_avx2(puVar5,local_1280,2);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,3);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,6);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0xc);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x18);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x19);
  rsaz_1024_gather5_avx2(puVar5,local_1280,4);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,5);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,10);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x14);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x15);
  rsaz_1024_gather5_avx2(puVar5,local_1280,6);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,7);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0xe);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x1c);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x1d);
  rsaz_1024_gather5_avx2(puVar5,local_1280,8);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,9);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x12);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x13);
  rsaz_1024_gather5_avx2(puVar5,local_1280,10);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0xb);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x16);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x17);
  rsaz_1024_gather5_avx2(puVar5,local_1280,0xc);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0xd);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x1a);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x1b);
  rsaz_1024_gather5_avx2(puVar5,local_1280,0xe);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0xf);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x1e);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,0x1f);
  rsaz_1024_gather5_avx2(puVar5,local_1280,param_3[0x7f] >> 3);
  iVar1 = 0x3f6;
  do {
    rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,5);
    iVar2 = iVar1 + -5;
    rsaz_1024_gather5_avx2
              (puVar4,local_1280,
               (int)(uint)CONCAT11(param_3[(long)(iVar1 >> 3) + 1],param_3[iVar1 >> 3]) >>
               ((byte)iVar1 & 7) & 0x1f);
    rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
    iVar1 = iVar2;
  } while (iVar2 != -1);
  rsaz_1024_sqr_avx2(puVar5,puVar5,puVar3,param_6,4);
  rsaz_1024_gather5_avx2(puVar4,local_1280,*param_3 & 0xf);
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar4,puVar3,param_6);
  rsaz_1024_mul_avx2(puVar5,puVar5,one,puVar3,param_6);
  rsaz_1024_red2norm_avx2(param_1,puVar5);
  OPENSSL_cleanse(local_1648,0x1600);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

