### 碰到的一个问题

在使用QT配合touch panel进行开发时，不需要为touch panel安装另外的驱动，直接使用QT当中的<br />
QEvent::TouchBegin<br />
QEvent::TouchUpdate<br />
QEvent::TouchEnd<br />
即可。