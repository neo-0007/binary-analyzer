
undefined8 FUN_0046bc60(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_00485290(*param_1);
  if (param_2 != 0) {
    iVar1 = FUN_0043c6f0(param_1 + 2,param_2,uVar2);
    if ((iVar1 == 0) || (iVar1 = FUN_0043caf0(param_1 + 1,param_2,0,0,0,uVar2), iVar1 == 0)) {
LAB_0046bcac:
      uVar2 = 0;
      goto LAB_0046bcae;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"secret");
    if (((lVar3 != 0) || (lVar3 = thunk_FUN_0041cdd0(param_2,"key"), lVar3 != 0)) &&
       ((*(long *)(lVar3 + 0x10) != 0 && (*(long *)(lVar3 + 0x18) != 0)))) {
      FUN_0041ad60(param_1[5],"../providers/implementations/kdfs/sskdf.c",0x147);
      param_1[5] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 5,0,param_1 + 6);
      if (iVar1 == 0) goto LAB_0046bcac;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"info");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
      FUN_0041ad60(param_1[7],"../providers/implementations/kdfs/sskdf.c",0x147);
      param_1[7] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 7,0,param_1 + 8);
      if (iVar1 == 0) goto LAB_0046bcac;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"salt");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
      FUN_0041ad60(param_1[9],"../providers/implementations/kdfs/sskdf.c",0x147);
      param_1[9] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 9,0,param_1 + 10);
      if (iVar1 == 0) goto LAB_0046bcac;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"maclen");
    if (lVar3 != 0) {
      iVar1 = thunk_FUN_0041d830(lVar3,&local_38);
      if ((iVar1 == 0) || (local_38 == 0)) goto LAB_0046bcac;
      param_1[0xb] = local_38;
    }
  }
  uVar2 = 1;
LAB_0046bcae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

