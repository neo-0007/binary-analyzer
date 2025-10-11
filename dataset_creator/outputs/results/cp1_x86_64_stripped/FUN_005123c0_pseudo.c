
char FUN_005123c0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 in_R9;
  long in_FS_OFFSET;
  int local_2c;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004a8930(&local_28,&local_2c,0);
  iVar2 = FUN_00423da0(local_28);
  if ((iVar2 - 0x43fU < 2) && (local_2c == -1)) {
    iVar2 = FUN_0040cb10(param_1,0,0,0,in_R9);
    cVar1 = (iVar2 != 0) * '\x02';
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecx_meth.c",0x22a,"ecd_item_verify");
    FUN_0051f8f0(0x10,0x66,0);
    cVar1 = '\0';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

