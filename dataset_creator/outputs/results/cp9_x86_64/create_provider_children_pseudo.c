
uint create_provider_children(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  lVar1 = *(long *)(param_1 + 0x58);
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x10));
  if (0 < iVar2) {
    uVar7 = 1;
    iVar5 = 0;
    do {
      iVar6 = iVar5 + 1;
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x10),iVar5);
      uVar3 = (**(code **)(lVar4 + 8))(param_1,*(undefined8 *)(lVar4 + 0x20));
      uVar7 = uVar7 & uVar3;
      iVar5 = iVar6;
    } while (iVar6 != iVar2);
    return uVar7;
  }
  return 1;
}

