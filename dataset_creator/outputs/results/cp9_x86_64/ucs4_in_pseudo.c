
/* std::(anonymous namespace)::ucs4_in(std::(anonymous namespace)::range<char16_t const, false>&,
   std::(anonymous namespace)::range<char32_t, true>&, unsigned long, std::codecvt_mode) */

undefined8
std::(anonymous_namespace)::ucs4_in(range *param_1,undefined8 *param_2,ulong param_3,uint param_4)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  long lVar6;
  uint *puVar7;
  ushort *puVar8;
  uint local_1c;
  
  local_1c = param_4;
  read_utf16_bom<false>(param_1,(codecvt_mode *)&local_1c);
  lVar1 = *(long *)(param_1 + 8);
  puVar8 = *(ushort **)param_1;
  uVar4 = (ulong)(lVar1 - (long)puVar8) >> 1;
  if (uVar4 != 0) {
    puVar2 = (uint *)param_2[1];
    puVar7 = (uint *)*param_2;
    do {
      if (puVar2 == puVar7) {
        return 1;
      }
      uVar5 = *puVar8;
      if ((local_1c & 1) == 0) {
        uVar5 = uVar5 << 8 | uVar5 >> 8;
      }
      uVar3 = (uint)uVar5;
      if (uVar5 - 0xd800 < 0x400) {
        if (uVar4 == 1) {
          return 1;
        }
        uVar5 = puVar8[1];
        if ((local_1c & 1) == 0) {
          uVar5 = uVar5 << 8 | uVar5 >> 8;
        }
        if (0x3ff < uVar5 - 0xdc00) goto LAB_0062ce68;
        uVar3 = uVar5 + 0xfca02400 + uVar3 * 0x400;
        lVar6 = 2;
joined_r0x0062cde9:
        if (param_3 < uVar3) {
          return 2;
        }
        puVar8 = puVar8 + lVar6;
        *(ushort **)param_1 = puVar8;
      }
      else {
        if (0x3ff < uVar5 - 0xdc00) {
          lVar6 = 1;
          goto joined_r0x0062cde9;
        }
LAB_0062ce68:
        if (param_3 < 0xffffffff) {
          return 2;
        }
        puVar8 = *(ushort **)param_1;
        uVar3 = 0xffffffff;
      }
      *param_2 = puVar7 + 1;
      *puVar7 = uVar3;
      uVar4 = (ulong)(lVar1 - (long)puVar8) >> 1;
      puVar7 = puVar7 + 1;
    } while (uVar4 != 0);
  }
  return 0;
}

