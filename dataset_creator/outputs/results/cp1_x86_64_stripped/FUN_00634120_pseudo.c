
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x006341c0) overlaps instruction at (ram,0x006341bf)
    */
/* WARNING: Removing unreachable block (ram,0x0063422b) */
/* WARNING: Removing unreachable block (ram,0x0063422d) */
/* WARNING: Removing unreachable block (ram,0x0063423c) */

void FUN_00634120(long *param_1,undefined8 param_2,int *param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,long param_8,byte param_9)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar6;
  bool bVar7;
  undefined8 unaff_retaddr;
  long lStack_10;
  
  plVar6 = (long *)&stack0xfffffffffffffff8;
  uVar3 = param_9 - 100 & 0xff;
  uVar4 = (&switchD_00634148::caseD_2c)[uVar3];
  lVar5 = (long)&switchD_00634148::caseD_2c + (long)(int)uVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x006341aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  default:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
    goto code_r0x006341c2;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x00634192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x0063417a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  case 0x13:
                    /* WARNING: Could not recover jumptable at 0x00634162. Too many branches */
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
    goto switchD_00634148_caseD_17;
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
    *(char *)(param_8 + 0x48) = *(char *)(param_8 + 0x48) + (byte)param_8;
    UNRECOVERED_JUMPTABLE = (code *)(ulong)*(uint *)((long)&UINT_0081e004 + (long)(int)uVar4);
code_r0x006341c2:
                    /* WARNING: Could not recover jumptable at 0x006341c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 0x2c:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  plVar6 = &lStack_10;
  lStack_10 = param_8;
  uVar4 = (byte)param_8 - 100 & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar4) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0063425a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x00634272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))();
    return;
  case 9:
                    /* WARNING: Could not emulate address calculation at 0x0063423f */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x0063422a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  case 0x13:
    lVar5 = *param_1;
    param_7 = unaff_retaddr;
    break;
  case 0x16:
    bVar2 = (byte)((long)&switchD_006341f8::caseD_16 +
                  (long)(int)(&switchD_006341f8::caseD_16)[uVar4]) & 0x62;
    if (param_4 == 1 ||
        ((long)&switchD_006341f8::caseD_16 + (long)(int)(&switchD_006341f8::caseD_16)[uVar4] & 0x62U
        ) != 0) {
      bVar7 = bVar2 == 0x62;
    }
    else {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    if (param_4 != 2 && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 3 && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 4 && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 5 && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 6 && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 7 && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 8 && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 9 && bVar7) {
      *param_3 = *param_3 + -1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar2 = 0x62;
      bVar7 = false;
    }
    if (param_4 != 10 && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 0xb && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 0xc && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 0xd && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 0xe && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 0xf && bVar7) {
      *param_3 = *param_3 + 1;
      bVar7 = *param_3 == 0;
    }
    else {
      bVar7 = bVar2 == 0x62;
    }
    if (param_4 != 0x10 && bVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
switchD_00634148_caseD_17:
  *(undefined8 *)((long)plVar6 + 0x10) = param_7;
                    /* WARNING: Could not emulate address calculation at 0x0063420e */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x28))();
  return;
}

