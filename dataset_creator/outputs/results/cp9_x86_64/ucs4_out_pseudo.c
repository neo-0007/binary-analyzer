
/* std::(anonymous namespace)::ucs4_out(std::(anonymous namespace)::range<char32_t const, true>&,
   std::(anonymous namespace)::range<char16_t, false>&, unsigned long, std::codecvt_mode) [clone
   .part.0] */

undefined8
std::(anonymous_namespace)::ucs4_out(long *param_1,long *param_2,ulong param_3,uint param_4)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  uint *puVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  
  puVar5 = (uint *)*param_1;
  if ((uint *)param_1[1] != puVar5) {
    do {
      uVar8 = *puVar5;
      if (param_3 < uVar8) {
        return 2;
      }
      puVar1 = (ushort *)*param_2;
      uVar4 = (ulong)(param_2[1] - (long)puVar1) >> 1;
      uVar6 = (ushort)uVar8;
      if (uVar8 < 0x10000) {
        if (uVar4 == 0) {
          return 1;
        }
        if ((param_4 & 1) == 0) {
          uVar8 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
        }
        *puVar1 = (ushort)uVar8;
        lVar2 = *param_2;
      }
      else {
        if (uVar4 < 2) {
          return 1;
        }
        uVar7 = (uVar6 & 0x3ff) + 0xdc00;
        uVar3 = (short)(uVar8 >> 10) + 0xd7c0;
        if ((param_4 & 1) == 0) {
          uVar7 = (uVar6 & 0x3ff) << 8 | uVar7 >> 8;
          *puVar1 = uVar3 * 0x100 | uVar3 >> 8;
          lVar2 = *param_2;
        }
        else {
          *puVar1 = uVar3;
          lVar2 = *param_2;
        }
        *param_2 = lVar2 + 2;
        *(ushort *)(lVar2 + 2) = uVar7;
        lVar2 = *param_2;
      }
      *param_2 = lVar2 + 2;
      puVar5 = (uint *)(*param_1 + 4);
      *param_1 = (long)puVar5;
    } while (puVar5 != (uint *)param_1[1]);
  }
  return 0;
}

