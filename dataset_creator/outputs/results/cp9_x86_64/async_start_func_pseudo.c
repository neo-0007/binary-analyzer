
void async_start_func(void)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = async_get_ctx();
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/async/async.c",0x9c,"async_start_func");
    ERR_set_error(0x33,0xc0103,0);
    return;
  }
  do {
    lVar1 = *(long *)(lVar3 + 0x3c8);
    uVar2 = (**(code **)(lVar1 + 0x3c8))(*(undefined8 *)(lVar1 + 0x3d0));
    *(undefined4 *)(lVar1 + 0x3dc) = 3;
    *(undefined4 *)(lVar1 + 0x3d8) = uVar2;
    swapcontext(lVar1,lVar3);
  } while( true );
}

