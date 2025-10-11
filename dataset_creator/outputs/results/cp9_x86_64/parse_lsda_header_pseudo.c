
/* WARNING: Type propagation algorithm not settling */
/* parse_lsda_header(_Unwind_Context*, unsigned char const*, lsda_header_info*) */

lsda_header_info *
parse_lsda_header(_Unwind_Context *param_1,uchar *param_2,lsda_header_info *param_3)

{
  uchar uVar1;
  lsda_header_info lVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
  lsda_header_info *plVar6;
  ulong uVar7;
  lsda_header_info *plVar8;
  
  uVar4 = 0;
  if (param_1 != (_Unwind_Context *)0x0) {
    uVar4 = _Unwind_GetRegionStart();
  }
  *(undefined8 *)param_3 = uVar4;
  uVar1 = *param_2;
  plVar6 = (lsda_header_info *)(param_2 + 1);
  if (uVar1 == 0xff) {
    *(undefined8 *)(param_3 + 8) = uVar4;
  }
  else {
    uVar7 = base_of_encoded_value(uVar1,param_1);
    plVar6 = (lsda_header_info *)
             read_encoded_value_with_base(uVar1,uVar7,(uchar *)plVar6,(ulong *)(param_3 + 8));
  }
  lVar2 = *plVar6;
  plVar6 = plVar6 + 1;
  plVar8 = (lsda_header_info *)0x0;
  param_3[0x28] = lVar2;
  if (lVar2 != (lsda_header_info)0xff) {
    bVar5 = 0;
    do {
      lVar2 = *plVar6;
      plVar6 = plVar6 + 1;
      bVar3 = bVar5 & 0x3f;
      bVar5 = bVar5 + 7;
      plVar8 = (lsda_header_info *)((ulong)plVar8 | (ulong)((byte)lVar2 & 0x7f) << bVar3);
    } while ((char)lVar2 < '\0');
    plVar8 = plVar8 + (long)plVar6;
  }
  *(lsda_header_info **)(param_3 + 0x18) = plVar8;
  plVar8 = plVar6 + 1;
  bVar5 = 0;
  uVar7 = 0;
  param_3[0x29] = *plVar6;
  do {
    lVar2 = *plVar8;
    plVar8 = plVar8 + 1;
    bVar3 = bVar5 & 0x3f;
    bVar5 = bVar5 + 7;
    uVar7 = uVar7 | (ulong)((byte)lVar2 & 0x7f) << bVar3;
  } while ((char)lVar2 < '\0');
  *(lsda_header_info **)(param_3 + 0x20) = plVar8 + uVar7;
  return plVar8;
}

