
/* WARNING: Instruction at (ram,0x0081499f) overlaps instruction at (ram,0x0081499e)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0064f1eb) */
/* WARNING: Removing unreachable block (ram,0x0064f1ed) */
/* WARNING: Removing unreachable block (ram,0x0064f1fc) */
/* std::istreambuf_iterator<char, std::char_traits<char> >
   std::__facet_shims::__time_get<char>(std::integral_constant<bool, true>, std::locale::facet
   const*, std::istreambuf_iterator<char, std::char_traits<char> >, std::istreambuf_iterator<char,
   std::char_traits<char> >, std::ios_base&, std::_Ios_Iostate&, tm*, char) */

void __thiscall
std::__facet_shims::__time_get<char>
          (__facet_shims *this,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,long param_8,byte param_9)

{
  byte *pbVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  byte bVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *unaff_RBP;
  bool bVar12;
  undefined8 unaff_retaddr;
  undefined1 auStack_e4af [58279];
  undefined1 *puStack_108;
  undefined8 uStack_18;
  
  uVar4 = param_9 - 100 & 0xff;
  uVar5 = (ulong)(int)(&switchD_0064f108::caseD_2c)[uVar4];
  bVar12 = 0xffffffffff7eb6b7 < uVar5;
  puVar6 = (uint *)((long)&switchD_0064f108::caseD_2c + uVar5);
  puVar9 = &stack0xfffffffffffffff8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar4) {
  case 0:
switchD_0064f108_caseD_0:
                    /* WARNING: Could not recover jumptable at 0x0064f16a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x20))();
    return;
  default:
switchD_0064f108_caseD_1:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x38);
    goto code_r0x0064f182;
  case 9:
switchD_0064f108_caseD_9:
                    /* WARNING: Could not recover jumptable at 0x0064f152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x30))();
    return;
  case 0x10:
switchD_0064f108_caseD_10:
                    /* WARNING: Could not recover jumptable at 0x0064f13a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x18))();
    return;
  case 0x13:
switchD_0064f108_caseD_13:
                    /* WARNING: Could not recover jumptable at 0x0064f122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x28))();
    return;
  case 0x16:
switchD_0064f108_caseD_16:
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
    goto switchD_0064f108_caseD_17;
  case 0x1f:
switchD_0064f108_caseD_1f:
    break;
  case 0x26:
switchD_0064f108_caseD_26:
    break;
  case 0x29:
switchD_0064f108_caseD_29:
    if (param_4 == 1 || (char)this == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_8 + 0x48) = *(char *)(param_8 + 0x48) + (byte)param_8;
    UNRECOVERED_JUMPTABLE = (code *)(ulong)*(uint *)((long)&UINT_00814980 + uVar5);
code_r0x0064f182:
                    /* WARNING: Could not recover jumptable at 0x0064f182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 0x2c:
  case 0x2d:
code_r0x00814948:
    bVar7 = (byte)((ulong)param_4 >> 8);
    *(char *)(uVar5 - 0x5755b6d5) = *(char *)(uVar5 - 0x5755b6d5) + bVar7 + bVar12;
    if (param_4 == 0) {
                    /* WARNING: Could not emulate address calculation at 0x0081494f */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*puVar6)();
      return;
    }
    *(char *)(uVar5 - 0x5755b6d5) = *(char *)(uVar5 - 0x5755b6d5) - bVar7;
    if (param_4 == 0) {
                    /* WARNING: Could not emulate address calculation at 0x00814957 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*puVar6)();
      return;
    }
    *(char *)(uVar5 - 0x5755b6d5) = *(char *)(uVar5 - 0x5755b6d5) - bVar7;
    if (param_4 == 0) {
                    /* WARNING: Could not emulate address calculation at 0x0081495f */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*puVar6)();
      return;
    }
    *(char *)(uVar5 - 0x5755b6d5) = *(char *)(uVar5 - 0x5755b6d5) - bVar7;
    if (param_4 == 0) {
                    /* WARNING: Could not emulate address calculation at 0x00814967 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*puVar6)();
      return;
    }
    *(char *)(uVar5 - 0x5785b6d5) = *(char *)(uVar5 - 0x5785b6d5) - bVar7;
    if (param_4 == 0) {
                    /* WARNING: Could not emulate address calculation at 0x0081496f */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*puVar6)();
      return;
    }
    *(char *)(uVar5 - 0x5755b6d5) = *(char *)(uVar5 - 0x5755b6d5) - bVar7;
    if (param_4 == 0) {
                    /* WARNING: Could not emulate address calculation at 0x00814977 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*puVar6)();
      return;
    }
    *(char *)(uVar5 - 0x5755b6d5) = *(char *)(uVar5 - 0x5755b6d5) - bVar7;
    if (param_4 == 0) {
                    /* WARNING: Could not emulate address calculation at 0x0081497f */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*puVar6)();
      return;
    }
    pbVar1 = (byte *)(uVar5 - 0x5755b6d5);
    bVar12 = *pbVar1 < bVar7;
    *pbVar1 = *pbVar1 - bVar7;
    if (param_4 != 0) {
      param_4 = param_4 + -1;
      if (param_4 != 0 && *pbVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_4 == 0) {
                    /* WARNING: Could not emulate address calculation at 0x0081498b */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)*puVar6)();
        return;
      }
      cVar8 = (char)((ulong)param_4 >> 8);
      *(char *)(uVar5 - 0x5755b6d5) = *(char *)(uVar5 - 0x5755b6d5) - cVar8;
      if (param_4 == 0) {
                    /* WARNING: Could not emulate address calculation at 0x00814997 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)*(uint *)(ulong)((int)puVar6 - 1))(this + 4,param_2 + 4);
        return;
      }
      puStack_108 = &stack0xfffffffffffffff0;
      puVar10 = (undefined8 *)&stack0xfffffffffffffff0;
      cVar2 = '\x1e';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar10 = puVar10 + -1;
        *puVar10 = *unaff_RBP;
        cVar2 = cVar2 + -1;
      } while ('\0' < cVar2);
      puVar11 = auStack_e4af;
      *(char *)(uVar5 - 0x5755b6d5) = *(char *)(uVar5 - 0x5755b6d5) - cVar8;
      puVar3 = &stack0xfffffffffffffff0;
      if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0081499f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)*(uint *)(
                                  "NSt7__cxx1115time_get_bynameIcSt19istreambuf_iteratorIcSt11char_traitsIcEEEE"
                                  + uVar5 + 0x30))();
        return;
      }
      goto code_r0x008149a0;
    }
    puVar9 = &stack0xfffffffffffffff8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar4) {
    case 0:
      goto switchD_0064f108_caseD_0;
    default:
      goto switchD_0064f108_caseD_1;
    case 9:
      goto switchD_0064f108_caseD_9;
    case 0x10:
      goto switchD_0064f108_caseD_10;
    case 0x13:
      goto switchD_0064f108_caseD_13;
    case 0x16:
      goto switchD_0064f108_caseD_16;
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
      goto switchD_0064f108_caseD_17;
    case 0x1f:
      goto switchD_0064f108_caseD_1f;
    case 0x26:
      goto switchD_0064f108_caseD_26;
    case 0x29:
      goto switchD_0064f108_caseD_29;
    case 0x2c:
    case 0x2d:
      goto code_r0x00814948;
    }
  }
  puVar11 = &stack0xfffffffffffffff0;
  puVar9 = &stack0xfffffffffffffff0;
  uVar4 = (byte)param_8 - 100 & 0xff;
  puVar6 = (uint *)((long)&switchD_0064f1b8::caseD_16 +
                   (long)(int)(&switchD_0064f1b8::caseD_16)[uVar4]);
  puVar3 = puStack_108;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar4) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0064f21a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x20))();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x0064f232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x38))();
    return;
  case 9:
                    /* WARNING: Could not emulate address calculation at 0x0064f1ff */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x30))();
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x0064f1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x18))();
    return;
  case 0x13:
    puVar6 = *(uint **)this;
    param_7 = unaff_retaddr;
    break;
  case 0x16:
  case 0x17:
code_r0x008149a0:
    puStack_108 = puVar3;
    *(undefined8 *)(puVar11 + -8) = 0xffffffff80ffe3a8;
    puVar6[-0x1fc00716] = puVar6[-0x1fc00716] + 1;
    puVar6[-0x1fc00716] = puVar6[-0x1fc00716] + 1;
    puVar6[-0x1fc00716] = puVar6[-0x1fc00716] + 1;
    puVar6[0x143ff8ea] = puVar6[0x143ff8ea] + 1;
    puVar6[-0x1fc00716] = puVar6[-0x1fc00716] + 1;
    puVar6[-0x1fc00716] = puVar6[-0x1fc00716] + 1;
    puVar6[-0x1fc00716] = puVar6[-0x1fc00716] + 1;
    *puVar6 = *puVar6 + 1;
    puVar6[-0x1fc00716] = puVar6[-0x1fc00716] + 1;
                    /* WARNING: Could not recover jumptable at 0x008149eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)puVar6)();
    return;
  }
switchD_0064f108_caseD_17:
  *(undefined8 *)(puVar9 + 0x10) = param_7;
                    /* WARNING: Could not emulate address calculation at 0x0064f1ce */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar6 + 10))();
  return;
}

