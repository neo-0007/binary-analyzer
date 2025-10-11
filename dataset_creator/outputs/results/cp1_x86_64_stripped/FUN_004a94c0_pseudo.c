
void FUN_004a94c0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00422380(&DAT_00940fb0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x3d0),"../crypto/async/async.c",0x91);
    uVar1 = *puVar2;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    FUN_00435f80(uVar1,param_1);
    return;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/async/async.c",0x8e,"async_release_job");
  FUN_0051f8f0(0x33,0xc0103,0);
  return;
}

