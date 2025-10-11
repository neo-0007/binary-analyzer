
/* check_exception_spec(lsda_header_info*, std::type_info const*, void*, long) */

undefined8
check_exception_spec(lsda_header_info *param_1,type_info *param_2,void *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  type_info *ptVar3;
  undefined8 uVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  void *local_30 [2];
  
  pbVar7 = (byte *)(*(long *)(param_1 + 0x18) + ~param_4);
  local_30[0] = param_3;
  while( true ) {
    uVar6 = 0;
    bVar5 = 0;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      bVar2 = bVar5 & 0x3f;
      bVar5 = bVar5 + 7;
      uVar6 = uVar6 | (ulong)(bVar1 & 0x7f) << bVar2;
    } while ((char)bVar1 < '\0');
    if (uVar6 == 0) break;
    ptVar3 = (type_info *)get_ttype_entry(param_1,uVar6);
    uVar4 = get_adjusted_ptr(ptVar3,param_2,local_30);
    if ((char)uVar4 != '\0') {
      return uVar4;
    }
  }
  return 0;
}

