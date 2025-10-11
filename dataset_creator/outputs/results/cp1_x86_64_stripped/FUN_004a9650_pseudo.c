
void FUN_004a9650(void)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_004a9550();
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/async/async.c",0x9c,"async_start_func");
    FUN_0051f8f0(0x33,0xc0103,0);
    return;
  }
  do {
    lVar1 = *(long *)(lVar3 + 0x3c8);
    uVar2 = (**(code **)(lVar1 + 0x3c8))(*(undefined8 *)(lVar1 + 0x3d0));
    *(undefined4 *)(lVar1 + 0x3dc) = 3;
    *(undefined4 *)(lVar1 + 0x3d8) = uVar2;
    FUN_006f2c00(lVar1,lVar3);
  } while( true );
}

