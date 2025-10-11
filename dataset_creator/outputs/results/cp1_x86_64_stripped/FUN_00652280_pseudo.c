
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0081ec83) overlaps instruction at (ram,0x0081ec82)
    */
/* WARNING: Removing unreachable block (ram,0x0065238b) */
/* WARNING: Removing unreachable block (ram,0x0065238d) */
/* WARNING: Removing unreachable block (ram,0x0065239c) */
/* WARNING: Removing unreachable block (ram,0x0081eca8) */
/* WARNING: Removing unreachable block (ram,0x0081ecac) */
/* WARNING: Removing unreachable block (ram,0x0081ecb0) */
/* WARNING: Removing unreachable block (ram,0x0081eca4) */
/* WARNING: Removing unreachable block (ram,0x0081eca7) */
/* WARNING: Removing unreachable block (ram,0x0081ecab) */
/* WARNING: Removing unreachable block (ram,0x0081ecaf) */
/* WARNING: Removing unreachable block (ram,0x0081ecb4) */
/* WARNING: Removing unreachable block (ram,0x0081ecb3) */
/* WARNING: Removing unreachable block (ram,0x0081ecb7) */
/* WARNING: Removing unreachable block (ram,0x0081ecbc) */
/* WARNING: Removing unreachable block (ram,0x0081ecbb) */
/* WARNING: Removing unreachable block (ram,0x0081ecbf) */
/* WARNING: Removing unreachable block (ram,0x0081eccc) */
/* WARNING: Removing unreachable block (ram,0x0081ed04) */
/* WARNING: Removing unreachable block (ram,0x0081ed73) */
/* WARNING: Removing unreachable block (ram,0x0081ed06) */
/* WARNING: Removing unreachable block (ram,0x0081ed7d) */
/* WARNING: Removing unreachable block (ram,0x0081ed89) */
/* WARNING: Removing unreachable block (ram,0x0081ed8b) */
/* WARNING: Removing unreachable block (ram,0x0081edf9) */
/* WARNING: Removing unreachable block (ram,0x0081ed08) */
/* WARNING: Removing unreachable block (ram,0x0081ecce) */
/* WARNING: Removing unreachable block (ram,0x0081ecd0) */
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
/* WARNING: Removing unreachable block (ram,0x0081ef96) */
/* WARNING: Removing unreachable block (ram,0x0081efa5) */
/* WARNING: Removing unreachable block (ram,0x0081efd6) */
/* WARNING: Removing unreachable block (ram,0x0081efe5) */
/* WARNING: Removing unreachable block (ram,0x0081f016) */
/* WARNING: Removing unreachable block (ram,0x0081f025) */
/* WARNING: Removing unreachable block (ram,0x0081f056) */
/* WARNING: Removing unreachable block (ram,0x0081f096) */
/* WARNING: Removing unreachable block (ram,0x0081f0d6) */
/* WARNING: Removing unreachable block (ram,0x0081f0a5) */
/* WARNING: Removing unreachable block (ram,0x0081f065) */
/* WARNING: Removing unreachable block (ram,0x0081ef65) */
/* WARNING: Removing unreachable block (ram,0x0081ecc0) */
/* WARNING: Removing unreachable block (ram,0x0081ecc4) */
/* WARNING: Removing unreachable block (ram,0x0081ecc3) */
/* WARNING: Removing unreachable block (ram,0x0081ecc8) */
/* WARNING: Removing unreachable block (ram,0x0081ecc7) */
/* WARNING: Removing unreachable block (ram,0x0081eccb) */
/* WARNING: Removing unreachable block (ram,0x0081ecb8) */
/* WARNING: Removing unreachable block (ram,0x0081ec9c) */
/* WARNING: Removing unreachable block (ram,0x0081ec94) */
/* WARNING: Removing unreachable block (ram,0x0081ec8c) */
/* WARNING: Removing unreachable block (ram,0x0081ec88) */
/* WARNING: Removing unreachable block (ram,0x0081ec90) */
/* WARNING: Removing unreachable block (ram,0x0081ec98) */
/* WARNING: Removing unreachable block (ram,0x0081eca0) */
/* WARNING: Removing unreachable block (ram,0x0081ec7c) */

void FUN_00652280(long *param_1,char *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined *param_8,byte param_9)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  uint *puVar6;
  char extraout_DH;
  char extraout_DH_00;
  char cVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 unaff_retaddr;
  undefined *puStack_10;
  
  cVar7 = (char)((ulong)param_3 >> 8);
  ppuVar8 = (undefined **)&stack0xfffffffffffffff8;
  ppuVar9 = (undefined **)&stack0xfffffffffffffff8;
  uVar3 = param_9 - 100 & 0xff;
  iVar2 = *(int *)(&DAT_0081ec28 + (ulong)uVar3 * 4);
  puVar4 = &DAT_0081ec28 + iVar2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0065230a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  default:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
    goto code_r0x00652322;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x006522f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x006522da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  case 0x13:
                    /* WARNING: Could not recover jumptable at 0x006522c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))();
    return;
  case 0x16:
    pbVar1 = (byte *)(param_4 + 99);
    *pbVar1 = *pbVar1 >> 4 | *pbVar1 << 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2b:
    goto code_r0x00652368;
  case 0x1f:
    break;
  case 0x26:
    param_4 = param_4 + -1;
    break;
  case 0x29:
    if (param_4 == 1 || (char)param_1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_8[0x48] = param_8[0x48] + (byte)param_8;
    UNRECOVERED_JUMPTABLE = (code *)(ulong)*(uint *)(&UNK_0081ec60 + iVar2);
code_r0x00652322:
                    /* WARNING: Could not recover jumptable at 0x00652322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 0x2c:
  case 0x2d:
    *param_2 = *param_2 << 1;
    if (param_4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puStack_10 = &UNK_0081ec31;
    func_0xffffffffe981cf67();
    if (param_4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puStack_10 = &UNK_0081ec39;
    func_0xffffffffe981cf6f();
    if (param_4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puStack_10 = &UNK_0081ec41;
    func_0xffffffffe981cf77();
    if (param_4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puStack_10 = &UNK_0081ec49;
    lVar5 = func_0xffffffffe981cf7f();
    if (param_4 == 0) {
      *(int *)(lVar5 + -0x17001cca) = *(int *)(lVar5 + -0x17001cca) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puStack_10 = &UNK_0081ec59;
    func_0xffffffffe981cf8f();
    if (param_4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puStack_10 = &UNK_0081ec61;
    func_0xffffffffe981cf97();
    if (param_4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puStack_10 = &UNK_0081ec69;
    func_0xffffffffa181cf9f();
    if (param_4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puStack_10 = &UNK_0081ec71;
    lVar5 = func_0xffffffffe981cfa7();
    if (param_4 == 0) {
      *(int *)(lVar5 + -0x17001cca) = *(int *)(lVar5 + -0x17001cca) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_2 = extraout_DH;
    if (param_4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puStack_10 = &UNK_0081ec7d;
    puVar6 = (uint *)func_0xffffffffe981cfb3();
    cVar7 = extraout_DH_00;
    if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0081ec7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*puVar6)();
      return;
    }
    goto code_r0x0081ec80;
  }
  ppuVar9 = &puStack_10;
  ppuVar8 = &puStack_10;
  puStack_10 = param_8;
  uVar3 = (byte)param_8 - 100 & 0xff;
  puVar6 = (uint *)(&DAT_0081ec80 + *(int *)(&DAT_0081ec80 + (ulong)uVar3 * 4));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
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
                    /* WARNING: Could not emulate address calculation at 0x0065239f */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x0065238a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  case 0x13:
    puVar4 = (undefined *)*param_1;
    param_7 = unaff_retaddr;
    break;
  case 0x16:
  case 0x17:
code_r0x0081ec80:
    *(char *)param_1 = (char)*param_1 - cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    if (param_4 == 0) {
      *(int *)((long)puVar6 + 0x37) = *(int *)((long)puVar6 + 0x37) + 1;
      *(int *)((long)puVar6 + 0x37) = *(int *)((long)puVar6 + 0x37) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      *(int *)((long)puVar6 + 0x37) = *(int *)((long)puVar6 + 0x37) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      *(int *)((long)puVar6 + 0x37) = *(int *)((long)puVar6 + 0x37) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      *(int *)((long)puVar6 + 0x37) = *(int *)((long)puVar6 + 0x37) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      *(int *)((long)puVar6 + 0x37) = *(int *)((long)puVar6 + 0x37) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      *(int *)((long)puVar6 + 0x37) = *(int *)((long)puVar6 + 0x37) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      *(int *)((long)puVar6 + 0x37) = *(int *)((long)puVar6 + 0x37) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      UNRECOVERED_JUMPTABLE = *(code **)puVar6;
      *(undefined **)((long)ppuVar9 + -8) = &UNK_0081eca5;
      (*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00652368:
  *(undefined8 *)((long)ppuVar8 + 0x10) = param_7;
                    /* WARNING: Could not emulate address calculation at 0x0065236e */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar4 + 0x28))();
  return;
}

