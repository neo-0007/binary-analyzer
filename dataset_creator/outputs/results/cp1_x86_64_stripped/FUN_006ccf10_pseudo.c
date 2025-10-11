
long FUN_006ccf10(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 auStack_288 [19];
  long local_1f0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 local_198;
  undefined4 local_190 [70];
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  int local_58;
  undefined2 local_30;
  undefined8 local_20;
  
  local_1f0 = param_1 + 1;
  puVar2 = &local_198;
  puVar7 = auStack_288;
  for (lVar4 = 0x1e; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_1c8 = 0x4000000000000000;
  iVar1 = FUN_006cc320(auStack_288);
  if ((iVar1 == 0) && (local_58 != 2)) {
    pcVar5 = (char *)(param_2 + 0xb4);
    do {
      cVar3 = (char)*(undefined4 *)(puVar2 + 1);
      *pcVar5 = cVar3;
      if ((cVar3 == '\x01') || (uVar6 = 0, cVar3 == '\x02')) {
        uVar6 = *puVar2;
      }
      puVar2 = puVar2 + 2;
      *(undefined8 *)(param_2 * -7 + -0x580 + (long)pcVar5 * 8) = uVar6;
      pcVar5 = pcVar5 + 1;
    } while (puVar2 != &local_78);
    *(undefined8 *)(param_2 + 0x10) = local_70;
    *(undefined2 *)(param_2 + 0xb0) = local_68;
    *(undefined2 *)(param_2 + 0xb2) = local_30;
    *(undefined8 *)(param_2 + 0x18) = local_1b8;
    *(undefined8 *)(param_2 + 8) = local_20;
    return param_2;
  }
  return 0;
}

