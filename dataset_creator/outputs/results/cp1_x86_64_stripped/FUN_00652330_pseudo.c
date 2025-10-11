
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0081ec83) overlaps instruction at (ram,0x0081ec82)
    */
/* WARNING: Removing unreachable block (ram,0x0081ecb0) */
/* WARNING: Removing unreachable block (ram,0x0081eca8) */
/* WARNING: Removing unreachable block (ram,0x0081eca4) */
/* WARNING: Removing unreachable block (ram,0x0081eca7) */
/* WARNING: Removing unreachable block (ram,0x0081ecac) */
/* WARNING: Removing unreachable block (ram,0x0081ecab) */
/* WARNING: Removing unreachable block (ram,0x0081ecaf) */
/* WARNING: Removing unreachable block (ram,0x0081ecb4) */
/* WARNING: Removing unreachable block (ram,0x0081ecb3) */
/* WARNING: Removing unreachable block (ram,0x0081ecb8) */
/* WARNING: Removing unreachable block (ram,0x0081ecb7) */
/* WARNING: Removing unreachable block (ram,0x0081ecbc) */
/* WARNING: Removing unreachable block (ram,0x0081ecbb) */
/* WARNING: Removing unreachable block (ram,0x0081ecbf) */
/* WARNING: Removing unreachable block (ram,0x0081eccf) */
/* WARNING: Removing unreachable block (ram,0x0081ecd4) */
/* WARNING: Removing unreachable block (ram,0x0081ecd3) */
/* WARNING: Removing unreachable block (ram,0x0081ecd7) */
/* WARNING: Removing unreachable block (ram,0x0081ecd8) */
/* WARNING: Removing unreachable block (ram,0x0081ece5) */
/* WARNING: Removing unreachable block (ram,0x0081ed16) */
/* WARNING: Removing unreachable block (ram,0x0081ed25) */
/* WARNING: Removing unreachable block (ram,0x0081ed56) */
/* WARNING: Removing unreachable block (ram,0x0081ed65) */
/* WARNING: Removing unreachable block (ram,0x0081ed96) */
/* WARNING: Removing unreachable block (ram,0x0081eda5) */
/* WARNING: Removing unreachable block (ram,0x0081edd6) */
/* WARNING: Removing unreachable block (ram,0x0081ede5) */
/* WARNING: Removing unreachable block (ram,0x0081ee16) */
/* WARNING: Removing unreachable block (ram,0x0081ee25) */
/* WARNING: Removing unreachable block (ram,0x0081ee56) */
/* WARNING: Removing unreachable block (ram,0x0081ee65) */
/* WARNING: Removing unreachable block (ram,0x0081ee96) */
/* WARNING: Removing unreachable block (ram,0x0081eea5) */
/* WARNING: Removing unreachable block (ram,0x0081eed6) */
/* WARNING: Removing unreachable block (ram,0x0081eee5) */
/* WARNING: Removing unreachable block (ram,0x0081ef16) */
/* WARNING: Removing unreachable block (ram,0x0081ef25) */
/* WARNING: Removing unreachable block (ram,0x0081ef56) */
/* WARNING: Removing unreachable block (ram,0x0081ef65) */
/* WARNING: Removing unreachable block (ram,0x0081ef96) */
/* WARNING: Removing unreachable block (ram,0x0081efa5) */
/* WARNING: Removing unreachable block (ram,0x0081efd6) */
/* WARNING: Removing unreachable block (ram,0x0081efe5) */
/* WARNING: Removing unreachable block (ram,0x0081f016) */
/* WARNING: Removing unreachable block (ram,0x0081f025) */
/* WARNING: Removing unreachable block (ram,0x0081f056) */
/* WARNING: Removing unreachable block (ram,0x0081f065) */
/* WARNING: Removing unreachable block (ram,0x0081f096) */
/* WARNING: Removing unreachable block (ram,0x0081f0a5) */
/* WARNING: Removing unreachable block (ram,0x0081f0d6) */
/* WARNING: Removing unreachable block (ram,0x0081ecc0) */
/* WARNING: Removing unreachable block (ram,0x0081ecc3) */
/* WARNING: Removing unreachable block (ram,0x0081ecc8) */
/* WARNING: Removing unreachable block (ram,0x0081ecc7) */
/* WARNING: Removing unreachable block (ram,0x0081eccc) */
/* WARNING: Removing unreachable block (ram,0x0081ed04) */
/* WARNING: Removing unreachable block (ram,0x0081ed73) */
/* WARNING: Removing unreachable block (ram,0x0081ed06) */
/* WARNING: Removing unreachable block (ram,0x0081ed08) */
/* WARNING: Removing unreachable block (ram,0x0081ed7d) */
/* WARNING: Removing unreachable block (ram,0x0081ed89) */
/* WARNING: Removing unreachable block (ram,0x0081ed8b) */
/* WARNING: Removing unreachable block (ram,0x0081edf9) */
/* WARNING: Removing unreachable block (ram,0x0081ecce) */
/* WARNING: Removing unreachable block (ram,0x0081ecd0) */
/* WARNING: Removing unreachable block (ram,0x0081eccb) */
/* WARNING: Removing unreachable block (ram,0x0081ecc4) */
/* WARNING: Removing unreachable block (ram,0x0081ec9c) */
/* WARNING: Removing unreachable block (ram,0x0081ec94) */
/* WARNING: Removing unreachable block (ram,0x0081ec8c) */
/* WARNING: Removing unreachable block (ram,0x0081ec90) */
/* WARNING: Removing unreachable block (ram,0x0081ec98) */
/* WARNING: Removing unreachable block (ram,0x0081eca0) */
/* WARNING: Removing unreachable block (ram,0x0081ec88) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_00652330(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  byte in_stack_00000018;
  
  uVar2 = in_stack_00000018 - 100 & 0xff;
  iVar1 = *(int *)(&DAT_0081ec80 + (ulong)uVar2 * 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x006523ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x006523d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))();
    return;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x006523a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x0065238a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  case 0x13:
                    /* WARNING: Could not recover jumptable at 0x00652372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))();
    return;
  case 0x16:
  case 0x17:
    break;
  }
  *(char *)param_1 = (char)*param_1 - (char)((ulong)param_3 >> 8);
  if (param_4 == 0) {
    *(int *)(&UNK_0081ecb7 + iVar1) = *(int *)(&UNK_0081ecb7 + iVar1) + 1;
    *(int *)(&UNK_0081ecb7 + iVar1) = *(int *)(&UNK_0081ecb7 + iVar1) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    *(int *)(&UNK_0081ecb7 + iVar1) = *(int *)(&UNK_0081ecb7 + iVar1) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    *(int *)(&UNK_0081ecb7 + iVar1) = *(int *)(&UNK_0081ecb7 + iVar1) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    *(int *)(&UNK_0081ecb7 + iVar1) = *(int *)(&UNK_0081ecb7 + iVar1) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    *(int *)(&UNK_0081ecb7 + iVar1) = *(int *)(&UNK_0081ecb7 + iVar1) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    *(int *)(&UNK_0081ecb7 + iVar1) = *(int *)(&UNK_0081ecb7 + iVar1) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    *(int *)(&UNK_0081ecb7 + iVar1) = *(int *)(&UNK_0081ecb7 + iVar1) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    (**(code **)(&DAT_0081ec80 + iVar1))();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

