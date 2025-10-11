
int find_module_idx(char *param_1,ulong *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar6 = gconv_cache;
  uVar2 = *(ushort *)(gconv_cache + 4);
  uVar3 = *(ushort *)(gconv_cache + 6);
  uVar7 = __hash_string();
  uVar4 = *(ushort *)(lVar6 + 8);
  uVar10 = (ulong)uVar7 % (ulong)uVar4;
  uVar11 = (int)cache_size - (uint)*(ushort *)(lVar6 + 4);
  do {
    puVar1 = (ushort *)(lVar6 + (ulong)uVar3 + uVar10 * 4);
    uVar5 = *puVar1;
    if (uVar5 == 0) {
      return -1;
    }
    if (uVar5 < uVar11) {
      iVar8 = strcmp(param_1,(char *)((ulong)(uint)uVar5 + (ulong)uVar2 + lVar6));
      if (iVar8 == 0) {
        *param_2 = (ulong)puVar1[1];
        return iVar8;
      }
    }
    uVar9 = (int)uVar10 + uVar7 % (uVar4 - 2) + 1;
    if (uVar4 <= uVar9) {
      uVar9 = uVar9 - uVar4;
    }
    uVar10 = (ulong)uVar9;
  } while( true );
}

