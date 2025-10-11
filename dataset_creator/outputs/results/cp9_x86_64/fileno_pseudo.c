
int fileno(FILE *__stream)

{
  long in_FS_OFFSET;
  
  if (((__stream->_flags & 0x2000U) != 0) && (-1 < __stream->_fileno)) {
    return __stream->_fileno;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
  return -1;
}

