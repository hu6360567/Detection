nableLock.java:35)
	at org.eclipse.swt.widgets.Synchronizer.runAsyncMessages(Synchronizer.java:135)
	at org.eclipse.swt.widgets.Display.runAsyncMessages(Display.java:4140)
	at org.eclipse.swt.widgets.Display.readAndDispatch(Display.java:3757)
	at org.eclipse.ui.application.WorkbenchAdvisor.openWindows(WorkbenchAdvisor.java:803)
	at org.eclipse.ui.internal.Workbench$33.runWithException(Workbench.java:1595)
	at org.eclipse.ui.internal.StartupThreading$StartupRunnable.run(StartupThreading.java:31)
	at org.eclipse.swt.widgets.RunnableLock.run(RunnableLock.java:35)
	at org.eclipse.swt.widgets.Synchronizer.runAsyncMessages(Synchronizer.java:135)
	at org.eclipse.swt.widgets.Display.runAsyncMessages(Display.java:4140)
	at org.eclipse.swt.widgets.Display.readAndDispatch(Display.java:3757)
	at org.eclipse.ui.internal.Workbench.runUI(Workbench.java:2604)
	at org.eclipse.ui.internal.Workbench.access$4(Workbench.java:2494)
	at org.eclipse.ui.internal.Workbench$7.run(Workbench.java:674)
	at org.eclipse.core.databinding.observable.Realm.runWithDefault(Realm.java:332)
	at org.eclipse.ui.internal.Workbench.createAndRunWorkbench(Workbench.java:667)
	at org.eclipse.ui.PlatformUI.createAndRunWorkbench(PlatformUI.java:149)
	at org.eclipse.ui.internal.ide.application.IDEApplication.start(IDEApplication.java:123)
	at org.eclipse.equinox.internal.app.EclipseAppHandle.run(EclipseAppHandle.java:196)
	at org.eclipse.core.runtime.internal.adaptor.EclipseAppLauncher.runApplication(EclipseAppLauncher.java:110)
	at org.eclipse.core.runtime.internal.adaptor.EclipseAppLauncher.start(EclipseAppLauncher.java:79)
	at org.eclipse.core.runtime.adaptor.EclipseStarter.run(EclipseStarter.java:344)
	at org.eclipse.core.runtime.adaptor.EclipseStarter.run(EclipseStarter.java:179)
	at sun.reflect.NativeMethodAccessorImpl.invoke0(Native Method)
	at sun.reflect.NativeMethodAccessorImpl.invoke(Unknown Source)
	at sun.reflect.DelegatingMethodAccessorImpl.invoke(Unknown Source)
	at java.lang.reflect.Method.invoke(Unknown Source)
	at org.eclipse.equinox.launcher.Main.invokeFramework(Main.java:622)
	at org.eclipse.equinox.launcher.Main.basicRun(Main.java:577)
	at org.eclipse.equinox.launcher.Main.run(Main.java:1410)
!SUBENTRY 1 org.eclipse.ui 4 0 2013-04-08 18:26:20.630
!MESSAGE Missing Input: Scave file 'D:\omnetpp-4.2.2\samples\detection\Attacked.anf' does not exists

!ENTRY org.eclipse.ui 2 2 2013-04-08 18:26:20.687
!MESSAGE Ignored attempt to add saveable that was already registered
!STACK 0
org.eclipse.core.runtime.AssertionFailedException: unknown saveable: org.eclipse.ui.internal.DefaultSaveable@9adbb8 from part: org.eclipse.ui.internal.ErrorEditorPart@9adbb8
	at org.eclipse.ui.internal.SaveablesList.logWarning(SaveablesList.java:187)
	at org.eclipse.ui.internal.SaveablesList.addModel(SaveablesList.java:117)
	at org.eclipse.ui.internal.SaveablesList.addModels(SaveablesList.java:289)
	at org.eclipse.ui.internal.SaveablesList.postOpen(SaveablesList.java:695)
	at org.eclipse.ui.internal.PartList.partOpened(PartList.java:234)
	at org.eclipse.ui.internal.PartList.access$0(PartList.java:210)
	at org.eclipse.ui.internal.PartList$1.propertyChanged(PartList.java:40)
	at org.eclipse.ui.internal.WorkbenchPartReference.fireInternalPropertyChange(WorkbenchPartReference.java:375)
	at org.eclipse.ui.internal.WorkbenchPartReference.getPart(WorkbenchPartReference.java:610)
	at org.eclipse.ui.internal.EditorAreaHelper.setVisibleEditor(EditorAreaHelper.java:271)
	at org.eclipse.ui.internal.EditorManager.setVisibleEditor(EditorManager.java:1459)
	at org.eclipse.ui.internal.EditorManager$5.runWithException(EditorManager.java:972)
	at org.eclipse.ui.internal.StartupThreading$StartupRunnable.run(StartupThreading.java:31)
	at org.eclipse.swt.widgets.RunnableLock.run(RunnableLock.java:35)
	at org.eclipse.swt.widgets.Synchronizer.runAsyncMessages(Synchronizer.java:135)
	at org.eclipse.swt.widgets.Display.runAsyncMes